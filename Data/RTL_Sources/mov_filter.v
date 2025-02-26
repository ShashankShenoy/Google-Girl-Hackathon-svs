module moving_average_filter #(
    parameter DATA_WIDTH = 16,
    parameter WINDOW_SIZE = 8
)(
    input clk,
    input rst,
    input signed [DATA_WIDTH-1:0] data_in,
    output reg signed [DATA_WIDTH-1:0] data_out
);
    // Data window buffer
    reg signed [DATA_WIDTH-1:0] window [0:WINDOW_SIZE-1];
    
    // Accumulator to store sum of all samples in window
    reg signed [DATA_WIDTH+$clog2(WINDOW_SIZE)-1:0] sum;
    
    // Counter for initialization
    reg [$clog2(WINDOW_SIZE):0] valid_samples;
    
    integer i;
    
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            for (i = 0; i < WINDOW_SIZE; i = i + 1) begin
                window[i] <= 0;
            end
            sum <= 0;
            valid_samples <= 0;
            data_out <= 0;
        end
        else begin
            // Shift window and add new data
            sum <= sum - window[WINDOW_SIZE-1] + data_in;
            
            for (i = WINDOW_SIZE-1; i > 0; i = i - 1) begin
                window[i] <= window[i-1];
            end
            window[0] <= data_in;
            
            // Manage valid samples counter during initialization
            if (valid_samples < WINDOW_SIZE)
                valid_samples <= valid_samples + 1;
                
            // Calculate output based on number of valid samples
            if (valid_samples < WINDOW_SIZE)
                data_out <= (valid_samples > 0) ? sum / valid_samples : 0;
            else
                data_out <= sum / WINDOW_SIZE;
        end
    end
endmodule