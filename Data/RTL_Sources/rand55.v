module xor_nor_flipflop (
    input wire clk,
    input wire rst,
    input wire a,
    input wire b,
    input wire c,
    output reg q
);

wire xor_out, nor_out;

assign xor_out = a ^ b;        // XOR gate
assign nor_out = ~(xor_out | c); // NOR gate

always @(posedge clk or posedge rst) begin
    if (rst)
        q <= 0;
    else
        q <= nor_out;
end

endmodule
