module nand_mux_flipflop (
    input wire clk,
    input wire rst,
    input wire a,
    input wire b,
    input wire sel,
    output reg q
);

wire nand_out, mux_out;

assign nand_out = ~(a & b); // NAND gate
assign mux_out  = sel ? nand_out : a; // MUX

always @(posedge clk or posedge rst) begin
    if (rst)
        q <= 0;
    else
        q <= mux_out;
end

endmodule
