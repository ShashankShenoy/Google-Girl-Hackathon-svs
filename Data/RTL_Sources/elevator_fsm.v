module elevator_controller_fsm(
    input clk,
    input reset,
    input [1:0] requested_floor,
    input door_sensor,
    output reg [1:0] current_floor,
    output reg moving_up,
    output reg moving_down,
    output reg door_open
);
    parameter IDLE = 2'b00, MOVING = 2'b01, DOOR_OPENING = 2'b10, DOOR_CLOSING = 2'b11;
    
    reg [1:0] state;
    reg [4:0] timer;
    parameter DOOR_OPEN_TIME = 5'd20, DOOR_CLOSE_TIME = 5'd10;
    
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            state <= IDLE;
            current_floor <= 2'b00;
            moving_up <= 0;
            moving_down <= 0;
            door_open <= 0;
            timer <= 0;
        end else begin
            case (state)
                IDLE: begin
                    if (requested_floor != current_floor) begin
                        state <= DOOR_CLOSING;
                        timer <= DOOR_CLOSE_TIME;
                    end
                    door_open <= 1;
                end
                
                DOOR_CLOSING: begin
                    door_open <= 0;
                    if (timer == 0) begin
                        state <= MOVING;
                        if (requested_floor > current_floor)
                            moving_up <= 1;
                        else
                            moving_down <= 1;
                    end else begin
                        timer <= timer - 1;
                    end
                end
                
                MOVING: begin
                    if ((moving_up && current_floor < requested_floor) ||
                        (moving_down && current_floor > requested_floor)) begin
                        if (moving_up)
                            current_floor <= current_floor + 1;
                        else
                            current_floor <= current_floor - 1;
                    end else begin
                        moving_up <= 0;
                        moving_down <= 0;
                        state <= DOOR_OPENING;
                        timer <= DOOR_OPEN_TIME;
                    end
                end
                
                DOOR_OPENING: begin
                    door_open <= 1;
                    if (timer == 0) begin
                        state <= IDLE;
                    end else begin
                        timer <= timer - 1;
                    end
                    
                    if (door_sensor) begin
                        timer <= DOOR_OPEN_TIME;
                    end
                end
                
                default: state <= IDLE;
            endcase
        end
    end
endmodule