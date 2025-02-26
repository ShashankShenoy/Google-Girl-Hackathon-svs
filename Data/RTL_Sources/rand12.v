module xor_nand_flipflop (
    input wire clk,
    input wire rst,
    input wire x,
    input wire y,
    output reg q
);

wire xor_out, nand_out;

assign xor_out = x ^ y;   // XOR gate
assign nand_out = ~(xor_out & y); // NAND gate

always @(posedge clk or posedge rst) begin
    if (rst)
        q <= 0;
    else
        q <= nand_out;
end

endmodule
