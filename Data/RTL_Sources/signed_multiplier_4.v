module Signed_Multiplier_4bit (
    input signed [3:0] A,
    input signed [3:0] B,
    output signed [7:0] product
);
    assign product = A * B;
endmodule
