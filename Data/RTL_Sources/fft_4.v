module fft_4point #(
    parameter WIDTH = 16
)(
    input clk,
    input rst,
    input start,
    input signed [WIDTH-1:0] x_real_0,
    input signed [WIDTH-1:0] x_real_1,
    input signed [WIDTH-1:0] x_real_2,
    input signed [WIDTH-1:0] x_real_3,
    input signed [WIDTH-1:0] x_imag_0,
    input signed [WIDTH-1:0] x_imag_1,
    input signed [WIDTH-1:0] x_imag_2,
    input signed [WIDTH-1:0] x_imag_3,
    output reg signed [WIDTH+1:0] y_real_0,
    output reg signed [WIDTH+1:0] y_real_1,
    output reg signed [WIDTH+1:0] y_real_2,
    output reg signed [WIDTH+1:0] y_real_3,
    output reg signed [WIDTH+1:0] y_imag_0,
    output reg signed [WIDTH+1:0] y_imag_1,
    output reg signed [WIDTH+1:0] y_imag_2,
    output reg signed [WIDTH+1:0] y_imag_3,
    output reg done
);
    // Stage 1 variables
    reg signed [WIDTH:0] stage1_real_0;
    reg signed [WIDTH:0] stage1_real_1;
    reg signed [WIDTH:0] stage1_real_2;
    reg signed [WIDTH:0] stage1_real_3;
    reg signed [WIDTH:0] stage1_imag_0;
    reg signed [WIDTH:0] stage1_imag_1;
    reg signed [WIDTH:0] stage1_imag_2;
    reg signed [WIDTH:0] stage1_imag_3;
    
    // Twiddle factors (W_N^k = e^(-j*2*pi*k/N))
    // W_4^0 = 1 + j*0
    // W_4^1 = 0 - j*1
    // W_4^2 = -1 + j*0
    // W_4^3 = 0 + j*1
    localparam signed [WIDTH-1:0] W_4_0_REAL = 16'h7FFF;  // ~1.0
    localparam signed [WIDTH-1:0] W_4_0_IMAG = 16'h0000;  // 0.0
    localparam signed [WIDTH-1:0] W_4_1_REAL = 16'h0000;  // 0.0
    localparam signed [WIDTH-1:0] W_4_1_IMAG = 16'h8000;  // -1.0
    localparam signed [WIDTH-1:0] W_4_2_REAL = 16'h8000;  // -1.0
    localparam signed [WIDTH-1:0] W_4_2_IMAG = 16'h0000;  // 0.0
    
    // State machine
    reg [1:0] state;
    localparam IDLE = 2'b00;
    localparam STAGE1 = 2'b01;
    localparam STAGE2 = 2'b10;
    localparam DONE = 2'b11;
    
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;
            done <= 0;
            
            // Reset all registers
            stage1_real_0 <= 0;
            stage1_real_1 <= 0;
            stage1_real_2 <= 0;
            stage1_real_3 <= 0;
            stage1_imag_0 <= 0;
            stage1_imag_1 <= 0;
            stage1_imag_2 <= 0;
            stage1_imag_3 <= 0;
            
            y_real_0 <= 0;
            y_real_1 <= 0;
            y_real_2 <= 0;
            y_real_3 <= 0;
            y_imag_0 <= 0;
            y_imag_1 <= 0;
            y_imag_2 <= 0;
            y_imag_3 <= 0;
        end
        else begin
            case (state)
                IDLE: begin
                    done <= 0;
                    if (start)
                        state <= STAGE1;
                end
                
                STAGE1: begin
                    // First stage calculation (butterfly operations)
                    stage1_real_0 <= x_real_0 + x_real_2;
                    stage1_imag_0 <= x_imag_0 + x_imag_2;
                    
                    stage1_real_1 <= x_real_1 + x_real_3;
                    stage1_imag_1 <= x_imag_1 + x_imag_3;
                    
                    stage1_real_2 <= x_real_0 - x_real_2;
                    stage1_imag_2 <= x_imag_0 - x_imag_2;
                    
                    stage1_real_3 <= x_real_1 - x_real_3;
                    stage1_imag_3 <= x_imag_1 - x_imag_3;
                    
                    state <= STAGE2;
                end
                
                STAGE2: begin
                    // Second stage calculation (with twiddle factors)
                    y_real_0 <= stage1_real_0 + stage1_real_1;
                    y_imag_0 <= stage1_imag_0 + stage1_imag_1;
                    
                    // W_4^1 * (stage1_1 - stage1_3)
                    y_real_1 <= stage1_real_2 + stage1_imag_3;
                    y_imag_1 <= stage1_imag_2 - stage1_real_3;
                    
                    y_real_2 <= stage1_real_0 - stage1_real_1;
                    y_imag_2 <= stage1_imag_0 - stage1_imag_1;
                    
                    // W_4^3 * (stage1_3 - stage1_1)
                    y_real_3 <= stage1_real_2 - stage1_imag_3;
                    y_imag_3 <= stage1_imag_2 + stage1_real_3;
                    
                    state <= DONE;
                end
                
                DONE: begin
                    done <= 1;
                    state <= IDLE;
                end
            endcase
        end
    end
endmodule