module debounce(
    input clk,
    input rst,
    input in,
    output reg out
);
    reg [19:0] count;
    reg sync_0, sync_1;
    
    always @(posedge clk) begin
        if (rst) begin
            sync_0 <= 1'b0;
            sync_1 <= 1'b0;
        end
        else begin
            sync_0 <= in;
            sync_1 <= sync_0;
        end
    end
    
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            count <= 20'b0;
            out <= 1'b0;
        end
        else begin
            if (out != sync_1) begin
                if (count == 20'hFFFFF)
                    out <= sync_1;
                count <= count + 1'b1;
            end
            else
                count <= 20'b0;
        end
    end
endmodule