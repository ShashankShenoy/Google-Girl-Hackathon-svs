module Barrel_Shifter_4bit (
    input [3:0] A,
    input [1:0] ShAmt,  // Shift amount (2-bit)
    output reg [3:0] Y
);
    always @(A, ShAmt) begin
        case(ShAmt)
            2'b00: Y = A;
            2'b01: Y = {A[2:0], 1'b0};  // Shift left by 1
            2'b10: Y = {A[1:0], 2'b00};  // Shift left by 2
            2'b11: Y = {A[0], 3'b000};  // Shift left by 3
            default: Y = A;
        endcase
    end
endmodule
