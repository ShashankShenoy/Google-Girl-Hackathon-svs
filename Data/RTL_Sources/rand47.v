module or_inverter_flipflop (
    input wire clk,
    input wire rst,
    input wire a,
    input wire b,
    output reg q
);

wire or_out, inv_out;

assign or_out = a | b;   // OR gate
assign inv_out = ~or_out; // Inverter

always @(posedge clk or posedge rst) begin
    if (rst)
        q <= 0;
    else
        q <= inv_out;
end

endmodule
