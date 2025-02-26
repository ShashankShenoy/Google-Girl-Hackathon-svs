module nor_xor_flipflop (
    input wire clk,
    input wire rst,
    input wire a,
    input wire b,
    output reg q
);

wire nor_out, xor_out;

assign nor_out = ~(a | b);
assign xor_out = nor_out ^ a;

always @(posedge clk or posedge rst) begin
    if (rst)
        q <= 0;
    else
        q <= xor_out;
end

endmodule
