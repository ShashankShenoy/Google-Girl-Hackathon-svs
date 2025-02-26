module nor_and_nand_flipflop (
    input wire clk,
    input wire rst,
    input wire a,
    input wire b,
    output reg q
);

wire nor_out, and_out, nand_out;

assign nor_out = ~(a | b);
assign and_out = nor_out & a;
assign nand_out = ~(and_out & b);

always @(posedge clk or posedge rst) begin
    if (rst)
        q <= 0;
    else
        q <= nand_out;
end

endmodule
