module xor_nand_mux_flipflop (
    input wire clk,
    input wire rst,
    input wire a,
    input wire b,
    input wire sel,
    output reg q
);

wire xor_out, nand_out, mux_out;

assign xor_out = a ^ b;
assign nand_out = ~(xor_out & b);
assign mux_out = sel ? nand_out : a;

always @(posedge clk or posedge rst) begin
    if (rst)
        q <= 0;
    else
        q <= mux_out;
end

endmodule
