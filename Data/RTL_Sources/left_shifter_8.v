module Shift_Register_Left_8bit (
    input [7:0] D,  // Data input
    input clk,
    input rst,
    input shift,  // Shift enable
    output reg [7:0] Q
);
    always @(posedge clk or posedge rst) begin
        if (rst)
            Q <= 8'b00000000;  // Reset to 0
        else if (shift)
            Q <= {Q[6:0], D[7]};  // Shift left and insert the MSB of D into the LSB
    end
endmodule
