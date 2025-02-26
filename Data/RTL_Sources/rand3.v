module xnor_and_mux_flipflop (
    input wire clk,
    input wire rst,
    input wire x,
    input wire y,
    input wire sel,
    output reg q
);

wire xnor_out, and_out, mux_out;

assign xnor_out = ~(x ^ y); // XNOR gate
assign and_out  = xnor_out & x; // AND gate
assign mux_out  = sel ? and_out : y; // MUX

always @(posedge clk or posedge rst) begin
    if (rst)
        q <= 0;
    else
        q <= mux_out;
end

endmodule
