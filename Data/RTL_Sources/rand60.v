module xor_mux_flipflop (
    input wire clk,
    input wire rst,
    input wire a,
    input wire b,
    input wire sel,
    output reg q
);

wire xor_out, mux_out;

assign xor_out = a ^ b;  // XOR gate
assign mux_out = sel ? xor_out : a;

always @(posedge clk or posedge rst) begin
    if (rst)
        q <= 0;
    else
        q <= mux_out;
end

endmodule
