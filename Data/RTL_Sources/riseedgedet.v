module rising_edge_detector(
    input clk,
    input rst,
    input in,
    output reg out
);
    reg in_delay;
    
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            in_delay <= 1'b0;
            out <= 1'b0;
        end
        else begin
            in_delay <= in;
            out <= in & ~in_delay;
        end
    end
endmodule