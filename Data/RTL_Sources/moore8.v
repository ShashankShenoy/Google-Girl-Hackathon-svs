module moore_fsm_8bit(
    input clk,
    input rst,
    input in,
    output reg out
);
    reg [7:0] state, next_state;
    
    always @(posedge clk or posedge rst) begin
        if (rst)
            state <= 8'b00000000;
        else
            state <= next_state;
    end
    
    always @(*) begin
        next_state = {state[6:0], in};
    end
    
    always @(*) begin
        out = (state == 8'b10101011) ? 1'b1 : 1'b0;
    end
endmodule