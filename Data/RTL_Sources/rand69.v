module half_subtractor_aoi (
    input wire a,
    input wire b,
    output wire diff,
    output wire borrow
);

assign diff = ~((a & ~b) | (~a & b)); // XOR for difference
assign borrow = ~a & b; // Borrow logic

endmodule
