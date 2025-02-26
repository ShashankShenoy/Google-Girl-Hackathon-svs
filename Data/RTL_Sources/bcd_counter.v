module bcd_counter(
    input clk,
    input reset,
    input enable,
    output reg [3:0] count,
    output reg carry
);
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            count <= 4'b0;
            carry <= 1'b0;
        end else if (enable) begin
            if (count == 4'd9) begin
                count <= 4'd0;
                carry <= 1'b1;
            end else begin
                count <= count + 1;
                carry <= 1'b0;
            end
        end else begin
            carry <= 1'b0;
        end
    end
endmodule