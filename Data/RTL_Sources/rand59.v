module aoi_xor_nand (
    input wire a,
    input wire b,
    output wire y
);

wire aoi_xor;

assign aoi_xor = ~((a & ~b) | (~a & b)); // XOR using AOI
assign y = ~(aoi_xor & a); // NAND

endmodule
