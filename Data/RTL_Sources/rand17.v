module xor_and_cascade (
    input wire a,
    input wire b,
    input wire c,
    output wire y
);

wire xor_out;

assign xor_out = a ^ b; // XOR gate
assign y = xor_out & c; // AND gate

endmodule
