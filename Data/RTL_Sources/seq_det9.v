module sequence_detector_1010(
    input clk,
    input rst,
    input in,
    output reg detected
);
    parameter IDLE = 3'b000;
    parameter S1 = 3'b001;
    parameter S10 = 3'b010;
    parameter S101 = 3'b011;
    
    reg [2:0] state, next_state;
    
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
            S10: next_state = in ? S101 : IDLE;
            S101: next_state = in ? S1 : S10;
            default: next_state = IDLE;
        endcase
    end
    
    always @(*) begin
        detected = (state == S101 && in == 1'b0);
    end
endmodule