module sequence_detector_010(
    input clk,
    input rst,
    input in,
    output reg detected
);
    parameter IDLE = 2'b00;
    parameter S0 = 2'b01;
    parameter S01 = 2'b10;
    
    reg [1:0] state, next_state;
    
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
            S01: next_state = in ? IDLE : S0;
            default: next_state = IDLE;
        endcase
    end
    
    always @(*) begin
        detected = (state == S01 && in == 1'b0);
    end
endmodule