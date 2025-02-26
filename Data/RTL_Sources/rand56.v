module or_and_inverter (
    input wire a,
    input wire b,
    input wire c,
    output wire y
);

wire or_out, and_out;

assign or_out = a | b;    // OR gate
assign and_out = or_out & c; // AND gate
assign y = ~and_out;      // Inverter

endmodule
