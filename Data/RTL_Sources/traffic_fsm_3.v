module traffic_light_fsm(
    input clk,
    input reset,
    output reg [2:0] light
);
    reg [1:0] current_state, next_state;
    parameter GREEN = 2'b00, YELLOW = 2'b01, RED = 2'b10;
    
    reg [3:0] timer;
    parameter GREEN_TIME = 4'd10, YELLOW_TIME = 4'd3, RED_TIME = 4'd7;
    
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            current_state <= GREEN;
            timer <= GREEN_TIME;
        end else begin
            if (timer == 0) begin
                current_state <= next_state;
                case (next_state)
                    GREEN: timer <= GREEN_TIME;
                    YELLOW: timer <= YELLOW_TIME;
                    RED: timer <= RED_TIME;
                    default: timer <= GREEN_TIME;
                endcase
            end else begin
                timer <= timer - 1;
            end
        end
    end
    
    always @(*) begin
        case (current_state)
            GREEN: next_state = YELLOW;
            YELLOW: next_state = RED;
            RED: next_state = GREEN;
            default: next_state = GREEN;
        endcase
    end
    
    always @(*) begin
        case (current_state)
            GREEN: light = 3'b001;
            YELLOW: light = 3'b010;
            RED: light = 3'b100;
            default: light = 3'b001;
        endcase
    end
endmodule