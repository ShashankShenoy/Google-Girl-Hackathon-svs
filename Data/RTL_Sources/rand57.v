module sr_latch_nand (
    input wire s,
    input wire r,
    output wire q,
    output wire q_bar
);

assign q = ~(s & q_bar);
assign q_bar = ~(r & q);

endmodule
