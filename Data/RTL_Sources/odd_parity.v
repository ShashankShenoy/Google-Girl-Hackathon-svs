module Parity_Generator_Odd (
    input [7:0] A,  // 8-bit input data
    output reg parity  // Odd parity bit
);
    always @(A)
    begin
        parity = ~(^A);  // XOR all bits together and invert to get odd parity
    end
endmodule
