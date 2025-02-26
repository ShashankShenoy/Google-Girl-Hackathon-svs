module sequence_detector_01110(
    input clk,
    input rst,
    input in,
    output reg detected
);
    parameter IDLE = 3'b000;
    parameter S0 = 3'b001;
    parameter S01 = 3'b010;
    parameter S011 = 3'b011;
    parameter S0111 = 3'b100;
    
    reg [2:0] state, next_state;
    
    always @(posedge clk or posedge rst) begin
        if (rst)
            state <= IDLE;
        else
            state <= next_state;
    end
    
    always @(*) begin
        case(state)
            IDLE: next_state = in ? IDLE : S0;
            S0: next_state = in ? S01 : S0;
            S01: next_state = in ? S011 : S0;
            S011: next_state = in ? S0111 : S0;
            S0111: next_state = in ? IDLE : S0;
            default: next_state = IDLE;
        endcase
    end
    
    always @(*) begin
        detected = (state == S0111 && in == 1'b0);
    end
endmodule