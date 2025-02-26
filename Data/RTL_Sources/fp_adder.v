module Floating_Point_Adder (
    input [7:0] A,
    input [7:0] B,
    output [7:0] result
);
    wire [7:0] sum;
    assign sum = A + B;
    assign result = sum;
endmodule
