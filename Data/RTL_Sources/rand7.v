module xnor_inverter_flipflop (
    input wire clk,
    input wire rst,
    input wire a,
    input wire b,
    output reg q
);

wire xnor_out, inv_out;

assign xnor_out = ~(a ^ b); // XNOR gate
assign inv_out = ~xnor_out;  // Inverter

always @(posedge clk or posedge rst) begin
    if (rst)
        q <= 0;
    else
        q <= inv_out;
end

endmodule
