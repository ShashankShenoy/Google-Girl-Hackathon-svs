module dual_xor (
    input wire a,
    input wire b,
    input wire c,
    output wire y
);

wire xor1_out;

assign xor1_out = a ^ b;
assign y = xor1_out ^ c;

endmodule
