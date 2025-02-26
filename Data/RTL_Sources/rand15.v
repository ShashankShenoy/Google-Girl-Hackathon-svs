module or_xor_flipflop (
    input wire clk,
    input wire rst,
    input wire a,
    input wire b,
    output reg q
);

wire or_out, xor_out;

assign or_out = a | b; // OR gate
assign xor_out = or_out ^ a; // XOR gate

always @(posedge clk or posedge rst) begin
    if (rst)
        q <= 0;
    else
        q <= xor_out;
end

endmodule
