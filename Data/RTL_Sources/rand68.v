module xor_nand_mux (
    input wire a,
    input wire b,
    input wire sel,
    output wire y
);

assign y = sel ? ~(a & b) : (a ^ b); // MUX with XOR/NAND logic

endmodule
