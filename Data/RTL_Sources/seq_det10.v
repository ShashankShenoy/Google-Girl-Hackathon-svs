module sequence_detector_0011(
    input clk,
    input rst,
    input in,
    output reg detected
);
    parameter IDLE = 3'b000;
    parameter S0 = 3'b001;
    parameter S00 = 3'b010;
    parameter S001 = 3'b011;
    
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
            S0: next_state = in ? IDLE : S00;
            S00: next_state = in ? S001 : S00;
            S001: next_state = in ? IDLE : S0;
            default: next_state = IDLE;
        endcase
    end
    
    always @(*) begin
        detected = (state == S001 && in == 1'b1);
    end
endmodule