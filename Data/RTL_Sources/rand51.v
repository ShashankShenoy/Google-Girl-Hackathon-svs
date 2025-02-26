module half_adder_aoi (
    input wire a,
    input wire b,
    output wire sum,
    output wire carry
);

assign sum = ~((a & ~b) | (~a & b)); // XOR using AOI
assign carry = a & b; // AND for carry

endmodule
