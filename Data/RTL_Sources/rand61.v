module nand_or_buffer_flipflop (
    input wire clk,
    input wire rst,
    input wire a,
    input wire b,
    input wire c,
    output reg q
);

wire nand_out, or_out, buf_out;

assign nand_out = ~(a & b); // NAND gate
assign or_out = nand_out | c; // OR gate
assign buf_out = or_out; // Buffer

always @(posedge clk or posedge rst) begin
    if (rst)
        q <= 0;
    else
        q <= buf_out;
end

endmodule
