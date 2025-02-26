module and_or_inv_flipflop (
    input wire clk,
    input wire rst,
    input wire a,
    input wire b,
    input wire c,
    output reg q
);

wire and_out, or_out, inv_out;

assign and_out = a & b;   // AND gate
assign or_out  = and_out | c; // OR gate
assign inv_out = ~or_out; // Inverter

always @(posedge clk or posedge rst) begin
    if (rst)
        q <= 0;
    else
        q <= inv_out;
end

endmodule
