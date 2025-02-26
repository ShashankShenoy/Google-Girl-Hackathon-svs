module nand3_flipflop (
    input wire clk,
    input wire rst,
    input wire a,
    input wire b,
    input wire c,
    output reg q
);

wire nand_out;

assign nand_out = ~(a & b & c);

always @(posedge clk or posedge rst) begin
    if (rst)
        q <= 0;
    else
        q <= nand_out;
end

endmodule
