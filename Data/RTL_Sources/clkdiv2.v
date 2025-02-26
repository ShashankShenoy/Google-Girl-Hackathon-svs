module clock_divider_by2(
    input clk,
    input rst,
    output reg clk_div2
);
    always @(posedge clk or posedge rst) begin
        if (rst)
            clk_div2 <= 1'b0;
        else
            clk_div2 <= ~clk_div2;
    end
endmodule