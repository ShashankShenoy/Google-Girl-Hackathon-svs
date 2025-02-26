module Carry_Lookahead_Adder_4bit (
    input [3:0] A,
    input [3:0] B,
    input Cin,  // Carry input
    output [3:0] Sum,
    output Cout  // Carry output
);
    wire [3:0] P, G, C;  // Propagate, Generate, and Carry signals

    assign P = A ^ B;  // Propagate
    assign G = A & B;  // Generate

    assign C[0] = Cin;
    assign C[1] = G[0] | (P[0] & C[0]);
    assign C[2] = G[1] | (P[1] & C[1]);
    assign C[3] = G[2] | (P[2] & C[2]);
    assign Cout = G[3] | (P[3] & C[3]);

    assign Sum = P ^ C;  // Sum is propagate XOR carry

endmodule
