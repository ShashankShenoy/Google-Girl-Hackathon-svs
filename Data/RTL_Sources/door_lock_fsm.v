module door_lock_controller_fsm(
    input clk,
    input reset,
    input [3:0] password,
    input try_unlock,
    output reg unlocked,
    output reg error
);
    parameter LOCKED = 2'b00, UNLOCKED = 2'b01, ERROR_STATE = 2'b10;
    parameter CORRECT_PASSWORD = 4'b1010;
    parameter MAX_ATTEMPTS = 3;
    
    reg [1:0] state;
    reg [1:0] failed_attempts;
    
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            state <= LOCKED;
            failed_attempts <= 0;
            unlocked <= 0;
            error <= 0;
        end else begin
            case (state)
                LOCKED: begin
                    if (try_unlock) begin
                        if (password == CORRECT_PASSWORD) begin
                            state <= UNLOCKED;
                            failed_attempts <= 0;
                            unlocked <= 1;
                            error <= 0;
                        end else begin
                            failed_attempts <= failed_attempts + 1;
                            if (failed_attempts == MAX_ATTEMPTS - 1) begin
                                state <= ERROR_STATE;
                                error <= 1;
                            end
                        end
                    end
                end
                
                UNLOCKED: begin
                    if (try_unlock) begin
                        state <= LOCKED;
                        unlocked <= 0;
                    end
                end
                
                ERROR_STATE: begin
                    if (reset) begin
                        state <= LOCKED;
                        failed_attempts <= 0;
                        error <= 0;
                    end
                end
                
                default: state <= LOCKED;
            endcase
        end
    end
endmodule