module fir_filter #(
    parameter DATA_WIDTH = 16,
    parameter COEF_WIDTH = 16,
    parameter TAP_NUMBER = 4
)(
    input clk,
    input rst,
    input signed [DATA_WIDTH-1:0] data_in,
    output reg signed [DATA_WIDTH+COEF_WIDTH-1:0] data_out
);
    // Define coefficients (example values)
    reg signed [COEF_WIDTH-1:0] coef [0:TAP_NUMBER-1];
    
    // Delay line registers
    reg signed [DATA_WIDTH-1:0] shift_reg [0:TAP_NUMBER-1];
    
    // Multiplication results
    reg signed [DATA_WIDTH+COEF_WIDTH-1:0] mult [0:TAP_NUMBER-1];
    
    // Accumulator for final sum
    reg signed [DATA_WIDTH+COEF_WIDTH-1:0] acc;
    
    integer i;
    
    // Initialize coefficients with example values
    initial begin
        coef[0] = 16'h0400; // 1024
        coef[1] = 16'h0300; // 768
        coef[2] = 16'h0200; // 512
        coef[3] = 16'h0100; // 256
    end
    
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            for (i = 0; i < TAP_NUMBER; i = i + 1) begin
                shift_reg[i] <= 0;
                mult[i] <= 0;
            end
            acc <= 0;
            data_out <= 0;
        end
        else begin
            // Shift the delay line
            for (i = TAP_NUMBER-1; i > 0; i = i - 1) begin
                shift_reg[i] <= shift_reg[i-1];
            end
            shift_reg[0] <= data_in;
            
            // Multiply and accumulate
            acc = 0;
            for (i = 0; i < TAP_NUMBER; i = i + 1) begin
                mult[i] = shift_reg[i] * coef[i];
                acc = acc + mult[i];
            end
            
            // Output the result
            data_out <= acc;
        end
    end
endmodule