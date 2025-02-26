module Ring_Counter_4bit (
    input clk,
    input rst,
    output reg [3:0] Q
);
    always @(posedge clk or posedge rst) begin
        if (rst)
            Q <= 4'b0001;  // Set initial value to 0001
        else
            Q <= {Q[2:0], Q[3]};  // Rotate left, shifting MSB to LSB
    end
endmodule
