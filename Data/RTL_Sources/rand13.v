module and_or_flipflop (
    input wire clk,
    input wire rst,
    input wire a,
    input wire b,
    input wire c,
    output reg q
);

wire and_out, or_out;

assign and_out = a & b;   // AND gate
assign or_out  = and_out | c; // OR gate

always @(posedge clk or posedge rst) begin
    if (rst)
        q <= 0;
    else
        q <= or_out;
end

endmodule
