module traffic_light_pedestrian_fsm(
    input clk,
    input reset,
    input pedestrian_request,
    output reg [2:0] traffic_light,
    output reg pedestrian_light
);
    reg [1:0] current_state, next_state;
    parameter GREEN = 2'b00, YELLOW = 2'b01, RED = 2'b10, PED_CROSSING = 2'b11;
    
    reg [4:0] timer;
    parameter GREEN_TIME = 5'd20, YELLOW_TIME = 5'd5, RED_TIME = 5'd10, CROSSING_TIME = 5'd15;
    
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
                    PED_CROSSING: timer <= CROSSING_TIME;
                    default: timer <= GREEN_TIME;
                endcase
            end else begin
                timer <= timer - 1;
            end
        end
    end
    
    always @(*) begin
        case (current_state)
            GREEN: begin
                if (pedestrian_request && timer <= 5)
                    next_state = YELLOW;
                else
                    next_state = GREEN;
            end
            YELLOW: next_state = RED;
            RED: next_state = PED_CROSSING;
            PED_CROSSING: next_state = GREEN;
            default: next_state = GREEN;
        endcase
    end
    
    always @(*) begin
        case (current_state)
            GREEN: begin
                traffic_light = 3'b001;
                pedestrian_light = 1'b0;
            end
            YELLOW: begin
                traffic_light = 3'b010;
                pedestrian_light = 1'b0;
            end
            RED: begin
                traffic_light = 3'b100;
                pedestrian_light = 1'b0;
            end
            PED_CROSSING: begin
                traffic_light = 3'b100;
                pedestrian_light = 1'b1;
            end
            default: begin
                traffic_light = 3'b001;
                pedestrian_light = 1'b0;
            end
        endcase
    end
endmodule