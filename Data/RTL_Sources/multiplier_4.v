module Multiplier_8bit (
    input [7:0] A,
    input [7:0] B,
    output [15:0] Product
);
    wire [15:0] P;  // Intermediate partial products

    assign P[0] = A[0] & B[0];
    assign P[1] = A[0] & B[1];
    assign P[2] = A[0] & B[2];
    assign P[3] = A[0] & B[3];
    assign P[4] = A[0] & B[4];
    assign P[5] = A[0] & B[5];
    assign P[6] = A[0] & B[6];
    assign P[7] = A[0] & B[7];

    assign P[8] = A[1] & B[0];
    assign P[9] = A[1] & B[1];
    assign P[10] = A[1] & B[2];
    assign P[11] = A[1] & B[3];
    assign P[12] = A[1] & B[4];
    assign P[13] = A[1] & B[5];
    assign P[14] = A[1] & B[6];
    assign P[15] = A[1] & B[7];

    assign Product = P;  // Product is the final result
endmodule
