module mealy_fsm_4bit(
    input clk,
    input rst,
    input in,
    output reg out
);
    reg [3:0] state, next_state;
    
    always @(posedge clk or posedge rst) begin
        if (rst)
            state <= 4'b0000;
        else
            state <= next_state;
    end
    
    always @(*) begin
        next_state = {state[2:0], in};
        out = (state == 4'b1010 && in == 1'b1) ? 1'b1 : 1'b0;
    end
endmodule