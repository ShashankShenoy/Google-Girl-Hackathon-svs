module sequence_detector_101(
    input clk,
    input rst,
    input in,
    output reg detected
);
    parameter IDLE = 2'b00;
    parameter S1 = 2'b01;
    parameter S10 = 2'b10;
    
    reg [1:0] state, next_state;
    
    always @(posedge clk or posedge rst) begin
        if (rst)
            state <= IDLE;
        else
            state <= next_state;
    end
    
    always @(*) begin
        case(state)
            IDLE: next_state = in ? S1 : IDLE;
            S1: next_state = in ? S1 : S10;
            S10: next_state = in ? S1 : IDLE;
            default: next_state = IDLE;
        endcase
    end
    
    always @(*) begin
        detected = (state == S10 && in == 1'b1);
    end
endmodule