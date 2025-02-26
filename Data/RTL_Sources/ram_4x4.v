module RAM_4x4 (
    input clk,
    input [1:0] addr,
    input [3:0] data_in,
    input write,
    output reg [3:0] data_out
);
    reg [3:0] mem [3:0];

    always @(posedge clk) begin
        if (write)
            mem[addr] <= data_in;
        else
            data_out <= mem[addr];
    end
endmodule
