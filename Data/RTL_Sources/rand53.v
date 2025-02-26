module dual_and_cascade (
    input wire a,
    input wire b,
    input wire c,
    output wire y
);

wire and1_out;

assign and1_out = a & b; // First AND gate
assign y = and1_out & c; // Second AND gate

endmodule
