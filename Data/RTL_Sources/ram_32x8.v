module ram_32x8(
    input clk,
    input write_enable,
    input [4:0] address,
    input [7:0] data_in,
    output reg [7:0] data_out
);
    reg [7:0] memory [0:31];
    
    always @(posedge clk) begin
        if (write_enable)
            memory[address] <= data_in;
        data_out <= memory[address];
    end
endmodule