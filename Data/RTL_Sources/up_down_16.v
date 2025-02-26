module updown_counter_16bit(
    input clk,
    input reset,
    input enable,
    input up_down,
    output reg [15:0] count
);
    always @(posedge clk or posedge reset) begin
        if (reset)
            count <= 16'b0;
        else if (enable) begin
            if (up_down)
                count <= count + 1;
            else
                count <= count - 1;
        end
    end
endmodule