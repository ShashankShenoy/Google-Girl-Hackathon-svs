module and_nor_flipflop (
    input wire clk,
    input wire rst,
    input wire a,
    input wire b,
    output reg q
);

wire and_out, nor_out;

assign and_out = a & b;   // AND gate
assign nor_out = ~(and_out | b); // NOR gate

always @(posedge clk or posedge rst) begin
    if (rst)
        q <= 0;
    else
        q <= nor_out;
end

endmodule
