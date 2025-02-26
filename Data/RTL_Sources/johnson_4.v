module Johnson_Counter_4bit (
    input clk,
    input rst,
    output reg [3:0] Q
);
    always @(posedge clk or posedge rst) begin
        if (rst)
            Q <= 4'b0000;  // Reset to 0
        else
            Q <= {Q[2:0], ~Q[3]};  // Rotate left and invert MSB
    end
endmodule
