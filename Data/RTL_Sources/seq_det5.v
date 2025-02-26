module sequence_detector_110011(
    input clk,
    input rst,
    input in,
    output reg detected
);
    parameter IDLE = 3'b000;
    parameter S1 = 3'b001;
    parameter S11 = 3'b010;
    parameter S110 = 3'b011;
    parameter S1100 = 3'b100;
    parameter S11001 = 3'b101;
    
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
            S1: next_state = in ? S11 : IDLE;
            S11: next_state = in ? S11 : S110;
            S110: next_state = in ? IDLE : S1100;
            S1100: next_state = in ? S11001 : S00;
            S11001: next_state = in ? S11 : IDLE;
            default: next_state = IDLE;
        endcase
    end
    
    always @(*) begin
        detected = (state == S11001 && in == 1'b1);
    end
endmodule