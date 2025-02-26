module clock_divider_by8(
    input clk,
    input rst,
    output reg clk_div8
);
    reg [2:0] count;
    
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            count <= 3'b000;
            clk_div8 <= 1'b0;
        end
        else begin
            count <= count + 1'b1;
            if (count == 3'b111)
                clk_div8 <= ~clk_div8;
        end
    end
endmodule