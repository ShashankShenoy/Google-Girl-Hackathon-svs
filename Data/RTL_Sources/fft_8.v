module fft_8point #(
    parameter WIDTH = 16
)(
    input clk,
    input rst,
    input start,
    input signed [WIDTH-1:0] x_real [0:7],
    input signed [WIDTH-1:0] x_imag [0:7],
    output reg signed [WIDTH+2:0] y_real [0:7],
    output reg signed [WIDTH+2:0] y_imag [0:7],
    output reg done
);
    // Twiddle factors (W_N^k = e^(-j*2*pi*k/N))
    // W_8^0 = 1.000 + j*0.000
    // W_8^1 = 0.707 - j*0.707
    // W_8^2 = 0.000 - j*1.000
    // W_8^3 = -0.707 - j*0.707
    // W_8^4 = -1.000 + j*0.000
    // W_8^5 = -0.707 + j*0.707
    // W_8^6 = 0.000 + j*1.000
    // W_8^7 = 0.707 + j*0.707
    
    localparam signed [WIDTH-1:0] W_8_0_REAL = 16'h7FFF;  // 1.000
    localparam signed [WIDTH-1:0] W_8_0_IMAG = 16'h0000;  // 0.000
    localparam signed [WIDTH-1:0] W_8_1_REAL = 16'h5A82;  // 0.707
    localparam signed [WIDTH-1:0] W_8_1_IMAG = 16'hA57E;  // -0.707
    localparam signed [WIDTH-1:0] W_8_2_REAL = 16'h0000;  // 0.000
    localparam signed [WIDTH-1:0] W_8_2_IMAG = 16'h8000;  // -1.000
    localparam signed [WIDTH-1:0] W_8_3_REAL = 16'hA57E;  // -0.707
    localparam signed [WIDTH-1:0] W_8_3_IMAG = 16'hA57E;  // -0.707
    
    // State machine variables
    reg [2:0] state;
    localparam IDLE = 3'b000;
    localparam STAGE1 = 3'b001;
    localparam STAGE2 = 3'b010;
    localparam STAGE3 = 3'b011;
    localparam DONE = 3'b100;
    
    // Stage 1 variables (after 2-point DFTs)
    reg signed [WIDTH:0] stage1_real [0:7];
    reg signed [WIDTH:0] stage1_imag [0:7];
    
    // Stage 2 variables (after 4-point DFTs)
    reg signed [WIDTH+1:0] stage2_real [0:7];
    reg signed [WIDTH+1:0] stage2_imag [0:7];
    
    // Temp variables for complex multiplications
    reg signed [2*WIDTH:0] temp_real, temp_imag;
    
    // Counters and indexes
    integer i;
    
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;
            done <= 0;
            
            // Reset all registers
            for (i = 0; i < 8; i = i + 1) begin
                stage1_real[i] <= 0;
                stage1_imag[i] <= 0;
                stage2_real[i] <= 0;
                stage2_imag[i] <= 0;
                y_real[i] <= 0;
                y_imag[i] <= 0;
            end
        end
        else begin
            case (state)
                IDLE: begin
                    done <= 0;
                    if (start)
                        state <= STAGE1;
                end
                
                STAGE1: begin
                    // First stage: Calculate 4 2-point DFTs
                    // DFT for (x[0], x[4])
                    stage1_real[0] <= x_real[0] + x_real[4];
                    stage1_imag[0] <= x_imag[0] + x_imag[4];
                    stage1_real[4] <= x_real[0] - x_real[4];
                    stage1_imag[4] <= x_imag[0] - x_imag[4];
                    
                    // DFT for (x[1], x[5])
                    stage1_real[1] <= x_real[1] + x_real[5];
                    stage1_imag[1] <= x_imag[1] + x_imag[5];
                    stage1_real[5] <= x_real[1] - x_real[5];
                    stage1_imag[5] <= x_imag[1] - x_imag[5];
                    
                    // DFT for (x[2], x[6])
                    stage1_real[2] <= x_real[2] + x_real[6];
                    stage1_imag[2] <= x_imag[2] + x_imag[6];
                    stage1_real[6] <= x_real[2] - x_real[6];
                    stage1_imag[6] <= x_imag[2] - x_imag[6];
                    
                    // DFT for (x[3], x[7])
                    stage1_real[3] <= x_real[3] + x_real[7];
                    stage1_imag[3] <= x_imag[3] + x_imag[7];
                    stage1_real[7] <= x_real[3] - x_real[7];
                    stage1_imag[7] <= x_imag[3] - x_imag[7];
                    
                    state <= STAGE2;
                end
                
                STAGE2: begin
                    // Second stage: Calculate 2 4-point DFTs with twiddle factors
                    // First 4-point DFT
                    stage2_real[0] <= stage1_real[0] + stage1_real[2];
                    stage2_imag[0] <= stage1_imag[0] + stage1_imag[2];
                    stage2_real[2] <= stage1_real[0] - stage1_real[2];
                    stage2_imag[2] <= stage1_imag[0] - stage1_imag[2];
                    
                    stage2_real[1] <= stage1_real[1] + stage1_real[3];
                    stage2_imag[1] <= stage1_imag[1] + stage1_imag[3];
                    
                    // W_8^2 = 0 - j*1
                    stage2_real[3] <= stage1_imag[1] - stage1_imag[3];
                    stage2_imag[3] <= stage1_real[3] - stage1_real[1];
                    
                    // Second 4-point DFT with W_8^k factors
                    // W_8^0 = 1 + j*0
                    stage2_real[4] <= stage1_real[4];
                    stage2_imag[4] <= stage1_imag[4];
                    
                    // W_8^1 = 0.707 - j*0.707 (approx for twiddle factor)
                    temp_real <= W_8_1_REAL * stage1_real[5] - W_8_1_IMAG * stage1_imag[5];
                    temp_imag <= W_8_1_REAL * stage1_imag[5] + W_8_1_IMAG * stage1_real[5];
                    stage2_real[5] <= temp_real >>> (WIDTH-1);
                    stage2_imag[5] <= temp_imag >>> (WIDTH-1);
                    
                    // W_8^2 = 0 - j*1
                    stage2_real[6] <= stage1_imag[6];
                    stage2_imag[6] <= -stage1_real[6];
                    
                    // W_8^3 = -0.707 - j*0.707
                    temp_real <= W_8_3_REAL * stage1_real[7] - W_8_3_IMAG * stage1_imag[7];
                    temp_imag <= W_8_3_REAL * stage1_imag[7] + W_8_3_IMAG * stage1_real[7];
                    stage2_real[7] <= temp_real >>> (WIDTH-1);
                    stage2_imag[7] <= temp_imag >>> (WIDTH-1);
                    
                    state <= STAGE3;
                end
                
                STAGE3: begin
                    // Final stage: 8-point DFT combining results
                    y_real[0] <= stage2_real[0] + stage2_real[1];
                    y_imag[0] <= stage2_imag[0] + stage2_imag[1];
                    
                    y_real[1] <= stage2_real[4] + stage2_real[5];
                    y_imag[1] <= stage2_imag[4] + stage2_imag[5];
                    
                    y_real[2] <= stage2_real[2] + stage2_real[3];
                    y_imag[2] <= stage2_imag[2] + stage2_imag[3];
                    
                    y_real[3] <= stage2_real[6] + stage2_real[7];
                    y_imag[3] <= stage2_imag[6] + stage2_imag[7];
                    
                    y_real[4] <= stage2_real[0] - stage2_real[1];
                    y_imag[4] <= stage2_imag[0] - stage2_imag[1];
                    
                    y_real[5] <= stage2_real[4] - stage2_real[5];
                    y_imag[5] <= stage2_imag[4] - stage2_imag[5];
                    
                    y_real[6] <= stage2_real[2] - stage2_real[3];
                    y_imag[6] <= stage2_imag[2] - stage2_imag[3];
                    
                    y_real[7] <= stage2_real[6] - stage2_real[7];
                    y_imag[7] <= stage2_imag[6] - stage2_imag[7];
                    
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