module nor4_flipflop (
    input wire clk,
    input wire rst,
    input wire a,
    input wire b,
    input wire c,
    input wire d,
    output reg q
);

wire nor_out;

assign nor_out = ~(a | b | c | d); // 4-input NOR

always @(posedge clk or posedge rst) begin
    if (rst)
        q <= 0;
    else
        q <= nor_out;
end

endmodule
