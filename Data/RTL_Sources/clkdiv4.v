module clock_divider_by4(
    input clk,
    input rst,
    output reg clk_div4
);
    reg [1:0] count;
    
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            count <= 2'b00;
            clk_div4 <= 1'b0;
        end
        else begin
            count <= count + 1'b1;
            if (count == 2'b11)
                clk_div4 <= ~clk_div4;
        end
    end
endmodule