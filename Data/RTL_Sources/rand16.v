module nand_xnor_flipflop (
    input wire clk,
    input wire rst,
    input wire a,
    input wire b,
    output reg q
);

wire nand_out, xnor_out;

assign nand_out = ~(a & b); // NAND gate
assign xnor_out = ~(nand_out ^ a); // XNOR gate

always @(posedge clk or posedge rst) begin
    if (rst)
        q <= 0;
    else
        q <= xnor_out;
end

endmodule
