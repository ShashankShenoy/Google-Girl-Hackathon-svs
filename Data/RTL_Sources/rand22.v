module aoi_flipflop (
    input wire clk,
    input wire rst,
    input wire a,
    input wire b,
    input wire c,
    output reg q
);

wire aoi_out;

assign aoi_out = ~((a & b) | c);

always @(posedge clk or posedge rst) begin
    if (rst)
        q <= 0;
    else
        q <= aoi_out;
end

endmodule
