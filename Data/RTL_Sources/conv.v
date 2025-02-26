module convolution_unit #(
    parameter DATA_WIDTH = 8,
    parameter KERNEL_SIZE = 3,
    parameter RESULT_WIDTH = 16
)(
    input clk,
    input rst,
    input start,
    input [DATA_WIDTH-1:0] pixel_data [0:KERNEL_SIZE*KERNEL_SIZE-1],
    input signed [DATA_WIDTH-1:0] kernel [0:KERNEL_SIZE*KERNEL_SIZE-1],
    output reg signed [RESULT_WIDTH-1:0] result,
    output reg valid
);
    // Convolution computation variables
    reg signed [2*DATA_WIDTH-1:0] mult_results [0:KERNEL_SIZE*KERNEL_SIZE-1];
    reg signed [RESULT_WIDTH-1:0] acc;
    
    // State machine
    reg [1:0] state;
    localparam IDLE = 2'b00;
    localparam MULTIPLY = 2'b01;
    localparam ACCUMULATE = 2'b10;
    localparam DONE = 2'b11;
    
    // Counter
    reg [3:0] counter;
    
    integer i;
    
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;
            counter <= 0;
            valid <= 0;
            result <= 0;
            acc <= 0;
            
            for (i = 0; i < KERNEL_SIZE*KERNEL_SIZE; i = i + 1) begin
                mult_results[i] <= 0;
            end
        end
        else begin
            case (state)
                IDLE: begin
                    valid <= 0;
                    counter <= 0;
                    if (start)
                        state <= MULTIPLY;
                end
                
                MULTIPLY: begin
                    // Perform element-wise multiplication
                    for (i = 0; i < KERNEL_SIZE*KERNEL_SIZE; i = i + 1) begin
                        mult_results[i] <= $signed({1'b0, pixel_data[i]}) * $signed(kernel[i]);
                    end
                    state <= ACCUMULATE;
                end
                
                ACCUMULATE: begin
                    // Accumulate the results
                    acc = 0;
                    for (i = 0; i < KERNEL_SIZE*KERNEL_SIZE; i = i + 1) begin
                        acc = acc + mult_results[i];
                    end
                    
                    // Clamp result if overflow
                    if (acc > {(RESULT_WIDTH){1'b1}})
                        result <= {(RESULT_WIDTH){1'b1}};
                    else
                        result <= acc;
                        
                    state <= DONE;
                end
                
                DONE: begin
                    valid <= 1;
                    state <= IDLE;
                end
            endcase
        end
    end
endmodule