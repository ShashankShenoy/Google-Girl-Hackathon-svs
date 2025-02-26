module Ripple_Carry_Adder_4bit (
    input [3:0] A,
    input [3:0] B,
    input Cin,  // Carry input
    output [3:0] Sum,
    output Cout  // Carry output
);
    wire C1, C2, C3;  // Internal carry wires

    Full_Adder FA0 (.A(A[0]), .B(B[0]), .Cin(Cin), .Sum(Sum[0]), .Cout(C1));
    Full_Adder FA1 (.A(A[1]), .B(B[1]), .Cin(C1), .Sum(Sum[1]), .Cout(C2));
    Full_Adder FA2 (.A(A[2]), .B(B[2]), .Cin(C2), .Sum(Sum[2]), .Cout(C3));
    Full_Adder FA3 (.A(A[3]), .B(B[3]), .Cin(C3), .Sum(Sum[3]), .Cout(Cout));

endmodule

module Full_Adder (
    input A,
    input B,
    input Cin,
    output Sum,
    output Cout
);
    assign Sum = A ^ B ^ Cin;
    assign Cout = (A & B) | (Cin & (A ^ B));
endmodule
