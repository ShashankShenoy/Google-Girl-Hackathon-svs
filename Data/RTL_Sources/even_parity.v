module Parity_Generator_Even (
    input [7:0] A,  // 8-bit input data
    output reg parity  // Even parity bit
);
    always @(A)
    begin
        parity = ^A;  // XOR all bits together
    end
endmodule
