module sr_flipflop (
    input wire s,
    input wire r,
    output wire q,
    output wire q_bar
);

assign q = ~(r | q_bar);
assign q_bar = ~(s | q);

endmodule
