module parity_checker (
    input wire a,
    input wire b,
    input wire c,
    output wire parity
);

assign parity = a ^ b ^ c; // XOR for odd parity

endmodule
