module aoi_mux_flipflop (
    input wire clk,
    input wire rst,
    input wire a,
    input wire b,
    input wire c,
    input wire sel,
    output reg q
);

wire aoi_out, mux_out;

assign aoi_out = ~((a & b) | c); // AOI logic
assign mux_out = sel ? aoi_out : a;

always @(posedge clk or posedge rst) begin
    if (rst)
        q <= 0;
    else
        q <= mux_out;
end

endmodule
