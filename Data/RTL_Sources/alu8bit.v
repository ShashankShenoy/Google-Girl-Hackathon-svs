module ALU_8bit (
    input [7:0] A,
    input [7:0] B,
    input [2:0] ALUControl,  // ALU operation selector
    output reg [7:0] Result,
    output reg Zero
);
    always @(A, B, ALUControl) begin
        case(ALUControl)
            3'b000: Result = A + B;    // ADD
            3'b001: Result = A - B;    // SUB
            3'b010: Result = A & B;    // AND
            3'b011: Result = A | B;    // OR
            3'b100: Result = A ^ B;    // XOR
            3'b101: Result = ~(A & B); // NAND
            3'b110: Result = ~(A | B); // NOR
            3'b111: Result = A << 1;   // SHIFT LEFT (arithmetic)
            default: Result = 8'b00000000;
        endcase
        Zero = (Result == 0) ? 1 : 0;  // Zero flag
    end
endmodule
