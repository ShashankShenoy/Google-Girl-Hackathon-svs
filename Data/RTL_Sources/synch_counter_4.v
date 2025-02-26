module Synchronous_Counter_4bit (
    input clk,
    input rst,
    input enable,
    output reg [3:0] Q
);
    always @(posedge clk or posedge rst) begin
        if (rst)
            Q <= 4'b0000;  // Reset to 0
        else if (enable)
            Q <= Q + 1;    // Increment counter
    end
endmodule
