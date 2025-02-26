module toggle_fsm(
    input clk,
    input reset,
    input trigger,
    output reg state_out
);
    reg current_state, next_state;
    parameter STATE_0 = 1'b0, STATE_1 = 1'b1;
    
    always @(posedge clk or posedge reset) begin
        if (reset)
            current_state <= STATE_0;
        else
            current_state <= next_state;
    end
    
    always @(*) begin
        case (current_state)
            STATE_0: next_state = trigger ? STATE_1 : STATE_0;
            STATE_1: next_state = trigger ? STATE_0 : STATE_1;
            default: next_state = STATE_0;
        endcase
    end
    
    always @(*) begin
        state_out = current_state;
    end
endmodule