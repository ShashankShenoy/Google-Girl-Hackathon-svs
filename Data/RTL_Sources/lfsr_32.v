module lfsr_32bit(
    input clk,
    input reset,
    input enable,
    output reg [31:0] lfsr
);
    wire feedback;
    assign feedback = lfsr[31] ^ lfsr[21] ^ lfsr[1] ^ lfsr[0];
    
    always @(posedge clk or posedge reset) begin
        if (reset)
            lfsr <= 32'h1;
        else if (enable)
            lfsr <= {lfsr[30:0], feedback};
    end
endmodule