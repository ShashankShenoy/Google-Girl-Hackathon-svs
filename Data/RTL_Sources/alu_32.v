module alu_32bit(
    input [31:0] a, b,
    input [3:0] op,
    output reg [31:0] result,
    output zero, overflow, carry_out
);
    parameter ADD = 4'b0000,
              SUB = 4'b0001,
              AND = 4'b0010,
              OR  = 4'b0011,
              XOR = 4'b0100,
              NOR = 4'b0101,
              SLT = 4'b0110, // Set less than
              SLL = 4'b0111, // Shift left logical
              SRL = 4'b1000, // Shift right logical
              SRA = 4'b1001; // Shift right arithmetic
              
    wire [31:0] add_result;
    wire [31:0] sub_result;
    wire add_cout, sub_cout;
    wire add_overflow, sub_overflow;
    
    // Adder for ADD operation
    wire [31:0] adder_b;
    wire adder_cin;
    
    // For subtraction, invert b and set carry in to 1
    assign adder_b = (op == SUB || op == SLT) ? ~b : b;
    assign adder_cin = (op == SUB || op == SLT) ? 1'b1 : 1'b0;
    
    // 32-bit adder (can be replaced with more efficient adder designs)
    wire [32:0] adder_result;
    assign adder_result = {1'b0, a} + {1'b0, adder_b} + adder_cin;
    assign add_result = adder_result[31:0];
    assign add_cout = adder_result[32];
    
    // Overflow detection for signed arithmetic
    assign add_overflow = (a[31] == adder_b[31]) && (add_result[31] != a[31]);
    
    // SLT result - set to 1 if a < b (signed comparison)
    wire slt_result;
    assign slt_result = (a[31] != b[31]) ? a[31] : add_result[31];
    
    // Main ALU operation
    always @(*) begin
        case (op)
            ADD: result = add_result;
            SUB: result = add_result;
            AND: result = a & b;
            OR:  result = a | b;
            XOR: result = a ^ b;
            NOR: result = ~(a | b);
            SLT: result = {31'b0, slt_result};
            SLL: result = b << a[4:0]; // Shift left by lower 5 bits of a
            SRL: result = b >> a[4:0]; // Shift right logical
            SRA: result = $signed(b) >>> a[4:0]; // Shift right arithmetic
            default: result = 32'b0;
        endcase
    end
    
    // Output flags
    assign zero = (result == 32'b0);
    assign overflow = (op == ADD) ? add_overflow : 
                      (op == SUB) ? add_overflow : 1'b0;
    assign carry_out = (op == ADD || op == SUB) ? add_cout : 1'b0;
    
endmodule