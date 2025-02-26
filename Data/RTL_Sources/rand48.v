module nand_and_cascade (
    input wire a,
    input wire b,
    input wire c,
    output wire y
);

wire nand_out;

assign nand_out = ~(a & b); // NAND gate
assign y = nand_out & c;    // AND gate

endmodule
