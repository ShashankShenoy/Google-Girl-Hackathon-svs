module aoi_or_nand (
    input wire a,
    input wire b,
    input wire c,
    output wire y
);

wire aoi_or;

assign aoi_or = ~((a | b) & c); // OR using AOI
assign y = ~(aoi_or & a); // NAND

endmodule
