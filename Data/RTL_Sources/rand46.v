module xor_buffer_flipflop (
    input wire clk,
    input wire rst,
    input wire a,
    input wire b,
    output reg q
);

wire xor_out, buf_out;

assign xor_out = a ^ b;  // XOR gate
assign buf_out = xor_out; // Buffer

always @(posedge clk or posedge rst) begin
    if (rst)
        q <= 0;
    else
        q <= buf_out;
end

endmodule
