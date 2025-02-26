module iir_filter #(
    parameter DATA_WIDTH = 16,
    parameter COEF_WIDTH = 16,
    parameter FWD_TAP = 3,  // Forward taps (b coefficients)
    parameter FB_TAP = 2    // Feedback taps (a coefficients)
)(
    input clk,
    input rst,
    input signed [DATA_WIDTH-1:0] data_in,
    output reg signed [DATA_WIDTH+COEF_WIDTH-1:0] data_out
);
    // Coefficients
    reg signed [COEF_WIDTH-1:0] b_coef [0:FWD_TAP-1]; // Forward path
    reg signed [COEF_WIDTH-1:0] a_coef [0:FB_TAP-1];  // Feedback path
    
    // Delay lines
    reg signed [DATA_WIDTH-1:0] x_shift [0:FWD_TAP-1];  // Input delay line
    reg signed [DATA_WIDTH+COEF_WIDTH-1:0] y_shift [0:FB_TAP-1]; // Output delay line
    
    // Multiplication results
    reg signed [DATA_WIDTH+COEF_WIDTH-1:0] fwd_mult [0:FWD_TAP-1];
    reg signed [DATA_WIDTH+COEF_WIDTH-1:0] fb_mult [0:FB_TAP-1];
    
    // Accumulators
    reg signed [DATA_WIDTH+COEF_WIDTH-1:0] fwd_acc, fb_acc;
    
    integer i;
    
    // Initialize coefficients with example values
    initial begin
        // Forward path (b) coefficients
        b_coef[0] = 16'h0800; // 2048
        b_coef[1] = 16'h0400; // 1024
        b_coef[2] = 16'h0200; // 512
        
        // Feedback path (a) coefficients
        a_coef[0] = 16'h0180; // 384
        a_coef[1] = 16'h00C0; // 192
    end
    
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            for (i = 0; i < FWD_TAP; i = i + 1) begin
                x_shift[i] <= 0;
                fwd_mult[i] <= 0;
            end
            for (i = 0; i < FB_TAP; i = i + 1) begin
                y_shift[i] <= 0;
                fb_mult[i] <= 0;
            end
            fwd_acc <= 0;
            fb_acc <= 0;
            data_out <= 0;
        end
        else begin
            // Update input delay line
            for (i = FWD_TAP-1; i > 0; i = i - 1) begin
                x_shift[i] <= x_shift[i-1];
            end
            x_shift[0] <= data_in;
            
            // Calculate forward path
            fwd_acc = 0;
            for (i = 0; i < FWD_TAP; i = i + 1) begin
                fwd_mult[i] = x_shift[i] * b_coef[i];
                fwd_acc = fwd_acc + fwd_mult[i];
            end
            
            // Calculate feedback path
            fb_acc = 0;
            for (i = 0; i < FB_TAP; i = i + 1) begin
                fb_mult[i] = y_shift[i] * a_coef[i];
                fb_acc = fb_acc + fb_mult[i];
            end
            
            // Calculate output
            data_out <= fwd_acc - fb_acc;
            
            // Update output delay line
            for (i = FB_TAP-1; i > 0; i = i - 1) begin
                y_shift[i] <= y_shift[i-1];
            end
            y_shift[0] <= data_out;
        end
    end
endmodule