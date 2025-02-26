module ALU_16bit (
    input [15:0] A,
    input [15:0] B,
    input [3:0] ALUControl,  // ALU operation selector
    output reg [15:0] Result,
    output reg Zero
);
    always @(A, B, ALUControl) begin
        case(ALUControl)
            4'b0000: Result = A + B;      // ADD
            4'b0001: Result = A - B;      // SUB
            4'b0010: Result = A & B;      // AND
            4'b0011: Result = A | B;      // OR
            4'b0100: Result = A ^ B;      // XOR
            4'b0101: Result = ~(A & B);   // NAND
            4'b0110: Result = ~(A | B);   // NOR
            4'b0111: Result = A << 1;     // SHIFT LEFT (arithmetic)
            default: Result = 16'b0000000000000000;
        endcase
        Zero = (Result == 0) ? 1 : 0;  // Zero flag
    end
endmodule
