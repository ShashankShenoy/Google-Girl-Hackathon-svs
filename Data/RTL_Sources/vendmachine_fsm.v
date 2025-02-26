module vending_machine_fsm(
    input clk,
    input reset,
    input nickel,
    input dime,
    input quarter,
    output reg dispense,
    output reg [5:0] credit
);
    parameter IDLE = 2'b00, ACCEPTING = 2'b01, DISPENSING = 2'b10;
    parameter PRICE = 6'd25;
    
    reg [1:0] state, next_state;
    
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            state <= IDLE;
            credit <= 0;
            dispense <= 0;
        end else begin
            state <= next_state;
            
            case (state)
                IDLE: begin
                    credit <= 0;
                    dispense <= 0;
                end
                
                ACCEPTING: begin
                    if (nickel)
                        credit <= credit + 5;
                    else if (dime)
                        credit <= credit + 10;
                    else if (quarter)
                        credit <= credit + 25;
                end
                
                DISPENSING: begin
                    dispense <= 1;
                    credit <= credit - PRICE;
                end
            endcase
        end
    end
    
    always @(*) begin
        case (state)
            IDLE: begin
                if (nickel || dime || quarter)
                    next_state = ACCEPTING;
                else
                    next_state = IDLE;
            end
            
            ACCEPTING: begin
                if (credit >= PRICE)
                    next_state = DISPENSING;
                else if (nickel || dime || quarter)
                    next_state = ACCEPTING;
                else
                    next_state = ACCEPTING;
            end
            
            DISPENSING: begin
                next_state = IDLE;
            end
            
            default: next_state = IDLE;
        endcase
    end
endmodule