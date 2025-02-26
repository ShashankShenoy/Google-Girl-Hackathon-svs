module Wallace_Tree_Multiplier_4bit (
    input [3:0] A,
    input [3:0] B,
    output [7:0] Product
);
    wire [15:0] P;  // Intermediate products

    // Generate partial products
    assign P[0] = A[0] & B[0];
    assign P[1] = A[0] & B[1];
    assign P[2] = A[0] & B[2];
    assign P[3] = A[0] & B[3];
    assign P[4] = A[1] & B[0];
    assign P[5] = A[1] & B[1];
    assign P[6] = A[1] & B[2];
    assign P[7] = A[1] & B[3];
    assign P[8] = A[2] & B[0];
    assign P[9] = A[2] & B[1];
    assign P[10] = A[2] & B[2];
    assign P[11] = A[2] & B[3];
    assign P[12] = A[3] & B[0];
    assign P[13] = A[3] & B[1];
    assign P[14] = A[3] & B[2];
    assign P[15] = A[3] & B[3];

    // Stage 1: First sum and carry reductions
    wire [7:0] S1, C1;
    Half_Adder HA0 (.A(P[0]), .B(P[4]), .Sum(S1[0]), .Carry(C1[0]));
    Half_Adder HA1 (.A(P[1]), .B(P[5]), .Sum(S1[1]), .Carry(C1[1]));
    Half_Adder HA2 (.A(P[2]), .B(P[6]), .Sum(S1[2]), .Carry(C1[2]));
    Half_Adder HA3 (.A(P[3]), .B(P[7]), .Sum(S1[3]), .Carry(C1[3]));
    Full_Adder FA0 (.A(P[8]), .B(P[12]), .Cin(C1[0]), .Sum(S1[4]), .Cout(C1[4]));
    Full_Adder FA1 (.A(P[9]), .B(P[13]), .Cin(C1[1]), .Sum(S1[5]), .Cout(C1[5]));
    Full_Adder FA2 (.A(P[10]), .B(P[14]), .Cin(C1[2]), .Sum(S1[6]), .Cout(C1[6]));
    Full_Adder FA3 (.A(P[11]), .B(P[15]), .Cin(C1[3]), .Sum(S1[7]), .Cout(C1[7]));

    // Final product
    assign Product = {C1[7], S1[7], S1[6], S1[5], S1[4], S1[3], S1[2], S1[1], S1[0]};

endmodule
