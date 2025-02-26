module spi_slave (
    input  wire        clk,          // System clock
    input  wire        rst_n,        // Active low reset
    input  wire        sclk,         // SPI clock from master
    input  wire        cs_n,         // Chip select (active low)
    input  wire        mosi,         // Master Out Slave In
    input  wire [7:0]  data_in,      // Data to transmit to master
    output wire        miso,         // Master In Slave Out
    output reg         data_valid,   // Data valid signal
    output reg  [7:0]  data_out      // Received data
);

    // Parameters
    parameter CPOL = 0;              // Clock polarity (0: idle low, 1: idle high)
    parameter CPHA = 0;              // Clock phase (0: sample on first edge, 1: sample on second edge)

    // Internal registers
    reg [7:0]  rx_data;              // Receive data register
    reg [7:0]  tx_data;              // Transmit data register
    reg [2:0]  bit_count;            // Bit counter
    
    // Detect rising and falling edges of SCLK
    reg sclk_prev, sclk_prev2;
    
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            sclk_prev <= CPOL;
            sclk_prev2 <= CPOL;
        end
        else begin
            sclk_prev <= sclk;
            sclk_prev2 <= sclk_prev;
        end
    end
    
    // Edge detection
    wire sclk_rising_edge = (sclk_prev == 1'b1 && sclk_prev2 == 1'b0);
    wire sclk_falling_edge = (sclk_prev == 1'b0 && sclk_prev2 == 1'b1);
    
    // Determine sampling and shifting edges based on CPOL and CPHA
    wire sample_edge = (CPOL == 0) ? 
                        (CPHA == 0 ? sclk_rising_edge : sclk_falling_edge) :
                        (CPHA == 0 ? sclk_falling_edge : sclk_rising_edge);
                        
    wire shift_edge = (CPOL == 0) ? 
                       (CPHA == 0 ? sclk_falling_edge : sclk_rising_edge) :
                       (CPHA == 0 ? sclk_rising_edge : sclk_falling_edge);

    // Data reception
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            rx_data <= 8'h00;
            bit_count <= 3'b000;
            data_valid <= 1'b0;
            data_out <= 8'h00;
            tx_data <= 8'h00;
        end
        else begin
            data_valid <= 1'b0;
            
            if (!cs_n) begin
                // Load transmit data when chip selected
                if (bit_count == 3'b000 && tx_data == 8'h00)
                    tx_data <= data_in;
                
                // Sample data on appropriate edge
                if (sample_edge) begin
                    rx_data <= {rx_data[6:0], mosi};
                end
                
                // Increment bit counter on shift edge
                if (shift_edge) begin
                    bit_count <= bit_count + 1;
                    tx_data <= {tx_data[6:0], 1'b0};
                end
                
                // Check if transmission complete (8 bits received)
                if (bit_count == 3'b000 && sample_edge) begin
                    data_out <= {rx_data[6:0], mosi};
                    data_valid <= 1'b1;
                    tx_data <= data_in;  // Load next byte to transmit
                end
            end
            else begin
                // Reset when not selected
                bit_count <= 3'b000;
                tx_data <= 8'h00;
            end
        end
    end

    // MISO output is MSB of tx_data
    assign miso = tx_data[7];

endmodule