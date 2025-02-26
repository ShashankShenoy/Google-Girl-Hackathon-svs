module nor_and_xor_flipflop (
    input wire clk,
    input wire rst,
    input wire a,
    input wire b,
    input wire c,
    output reg q
);

wire nor_out, and_out, xor_out;

assign nor_out = ~(a | b); // NOR gate
assign and_out = nor_out & c; // AND gate
assign xor_out = and_out ^ a; // XOR gate

always @(posedge clk or posedge rst) begin
    if (rst)
        q <= 0;
    else
        q <= xor_out;
end

endmodule
