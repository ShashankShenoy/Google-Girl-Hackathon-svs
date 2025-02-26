module t_ff_and_nor (
    input wire clk,
    input wire rst,
    input wire t,
    output reg q
);

wire nor_out, and_out;

assign nor_out = ~(q | t);
assign and_out = nor_out & q;

always @(posedge clk or posedge rst) begin
    if (rst)
        q <= 0;
    else if (t)
        q <= ~q;
end

endmodule
``
