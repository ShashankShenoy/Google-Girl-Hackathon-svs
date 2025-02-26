module RAM_8x8 (
    input clk,
    input [2:0] addr,
    input [7:0] data_in,
    input write,
    output reg [7:0] data_out
);
    reg [7:0] mem [7:0];

    always @(posedge clk) begin
        if (write)
            mem[addr] <= data_in;
        else
            data_out <= mem[addr];
    end
endmodule
