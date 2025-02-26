module Shift_Register_Right_8bit (
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
            Q <= {D[0], Q[7:1]};  // Shift right and insert the LSB of D into the MSB
    end
endmodule
