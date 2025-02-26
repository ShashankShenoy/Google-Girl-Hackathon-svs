module lfsr_16bit(
    input clk,
    input reset,
    input enable,
    output reg [15:0] lfsr
);
    wire feedback;
    assign feedback = lfsr[15] ^ lfsr[14] ^ lfsr[12] ^ lfsr[3];
    
    always @(posedge clk or posedge reset) begin
        if (reset)
            lfsr <= 16'h1;
        else if (enable)
            lfsr <= {lfsr[14:0], feedback};
    end
endmodule