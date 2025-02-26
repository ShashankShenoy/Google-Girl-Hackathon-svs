module sequence_detector_1001(
    input clk,
    input reset,
    input data_in,
    output detected
);
    parameter S0 = 2'b00, S1 = 2'b01, S2 = 2'b10, S3 = 2'b11;
    
    reg [1:0] current_state, next_state;
    
    always @(posedge clk or posedge reset) begin
        if (reset)
            current_state <= S0;
        else
            current_state <= next_state;
    end
    
    always @(*) begin
        case (current_state)
            S0: next_state = data_in ? S1 : S0;
            S1: next_state = data_in ? S1 : S2;
            S2: next_state = data_in ? S1 : S3;
            S3: next_state = data_in ? S1 : S0;
            default: next_state = S0;
        endcase
    end
    
    assign detected = (current_state == S3) && (data_in == 1);
endmodule