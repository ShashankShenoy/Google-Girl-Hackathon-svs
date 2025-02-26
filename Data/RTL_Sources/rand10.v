module nor_and_flipflop (
    input wire clk,
    input wire rst,
    input wire p,
    input wire q,
    output reg d_out
);

wire nor_out, and_out;

assign nor_out = ~(p | q);  // NOR gate
assign and_out = nor_out & q; // AND gate

always @(posedge clk or posedge rst) begin
    if (rst)
        d_out <= 0;
    else
        d_out <= and_out;
end

endmodule
