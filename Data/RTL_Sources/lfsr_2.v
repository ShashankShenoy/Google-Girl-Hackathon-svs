module LFSR_2bit (
    input clk,
    input rst,
    output reg [1:0] Q
);
    always @(posedge clk or posedge rst) begin
        if (rst)
            Q <= 2'b01;
        else
            Q <= {Q[0], Q[1] ^ Q[0]};
    end
endmodule
