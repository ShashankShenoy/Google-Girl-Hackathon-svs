module priority_encoder_8bit(
    input [7:0] data_in,
    output reg [2:0] encoded_out,
    output valid
);
    // Valid output when at least one input bit is high
    assign valid = |data_in;
    
    // Priority encoder logic
    always @(*) begin
        casex(data_in)
            8'b1xxxxxxx: encoded_out = 3'b111; // Priority 7
            8'b01xxxxxx: encoded_out = 3'b110; // Priority 6
            8'b001xxxxx: encoded_out = 3'b101; // Priority 5
            8'b0001xxxx: encoded_out = 3'b100; // Priority 4
            8'b00001xxx: encoded_out = 3'b011; // Priority 3
            8'b000001xx: encoded_out = 3'b010; // Priority 2
            8'b0000001x: encoded_out = 3'b001; // Priority 1
            8'b00000001: encoded_out = 3'b000; // Priority 0
            default: encoded_out = 3'b000;     // No valid input
        endcase
    end
    
endmodule