module and_nand_flipflop (
    input wire clk,
    input wire rst,
    input wire a,
    input wire b,
    output reg q
);

wire and_out, nand_out;

assign and_out = a & b;        // AND gate
assign nand_out = ~(and_out);  // NAND gate

always @(posedge clk or posedge rst) begin
    if (rst)
        q <= 0;
    else
        q <= nand_out;
end

endmodule
