module FIFO_4bit (
    input clk,
    input rst,
    input [3:0] data_in,
    input write,
    input read,
    output reg [3:0] data_out,
    output reg full,
    output reg empty
);
    reg [3:0] fifo [3:0];
    reg [1:0] wr_ptr, rd_ptr;

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            wr_ptr <= 2'b00;
            rd_ptr <= 2'b00;
            full <= 0;
            empty <= 1;
        end else begin
            if (write && !full) begin
                fifo[wr_ptr] <= data_in;
                wr_ptr <= wr_ptr + 1;
                empty <= 0;
                if (wr_ptr == rd_ptr)
                    full <= 1;
            end
            if (read && !empty) begin
                data_out <= fifo[rd_ptr];
                rd_ptr <= rd_ptr + 1;
                full <= 0;
                if (rd_ptr == wr_ptr)
                    empty <= 1;
            end
        end
    end
endmodule
