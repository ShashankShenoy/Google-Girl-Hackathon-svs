module majority_circuit (
    input wire a,
    input wire b,
    input wire c,
    output wire y
);

assign y = (a & b) | (b & c) | (a & c); // Majority function

endmodule
