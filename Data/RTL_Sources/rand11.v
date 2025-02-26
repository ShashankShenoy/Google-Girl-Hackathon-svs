module mux_flipflop (
    input wire clk,
    input wire rst,
    input wire sel,
    input wire d0,
    input wire d1,
    output reg q
);

wire mux_out;

assign mux_out = sel ? d1 : d0; // Multiplexer

always @(posedge clk or posedge rst) begin
    if (rst)
        q <= 0;
    else
        q <= mux_out;
end

endmodule
