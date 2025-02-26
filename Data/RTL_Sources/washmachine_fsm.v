module washing_machine_fsm(
    input clk,
    input reset,
    input start,
    input door_closed,
    output reg [1:0] state,
    output reg motor,
    output reg water_valve,
    output reg drain_valve,
    output reg complete
);
    parameter IDLE = 2'b00, WASH = 2'b01, RINSE = 2'b10, SPIN = 2'b11;
    
    reg [1:0] current_state, next_state;
    reg [7:0] timer;
    parameter WASH_TIME = 8'd200, RINSE_TIME = 8'd100, SPIN_TIME = 8'd50;
    
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            current_state <= IDLE;
            timer <= 8'd0;
        end else begin
            current_state <= next_state;
            if (current_state != IDLE && current_state == next_state)
                timer <= (timer > 0) ? timer - 1 : 0;
            else if (next_state == WASH)
                timer <= WASH_TIME;
            else if (next_state == RINSE)
                timer <= RINSE_TIME;
            else if (next_state == SPIN)
                timer <= SPIN_TIME;
        end
    end
    
    always @(*) begin
        case (current_state)
            IDLE: begin
                if (start && door_closed)
                    next_state = WASH;
                else
                    next_state = IDLE;
            end
            WASH: begin
                if (timer == 0)
                    next_state = RINSE;
                else
                    next_state = WASH;
            end
            RINSE: begin
                if (timer == 0)
                    next_state = SPIN;
                else
                    next_state = RINSE;
            end
            SPIN: begin
                if (timer == 0)
                    next_state = IDLE;
                else
                    next_state = SPIN;
            end
            default: next_state = IDLE;
        endcase
    end
    
    always @(*) begin
        state = current_state;
        case (current_state)
            IDLE: begin
                motor = 0;
                water_valve = 0;
                drain_valve = 0;
                complete = (next_state == IDLE) && (current_state == SPIN);
            end
            WASH: begin
                motor = 1;
                water_valve = 1;
                drain_valve = 0;
                complete = 0;
            end
            RINSE: begin
                motor = 1;
                water_valve = 1;
                drain_valve = 1;
                complete = 0;
            end
            SPIN: begin
                motor = 1;
                water_valve = 0;
                drain_valve = 1;
                complete = 0;
            end
            default: begin
                motor = 0;
                water_valve = 0;
                drain_valve = 0;
                complete = 0;
            end
        endcase
    end
endmodule