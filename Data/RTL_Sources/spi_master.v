module spi_master (
    input  wire        clk,          // System clock
    input  wire        rst_n,        // Active low reset
    input  wire        start,        // Start transmission signal
    input  wire [7:0]  data_in,      // Data to transmit
    input  wire        miso,         // Master In Slave Out
    output reg         sclk,         // SPI clock
    output wire        mosi,         // Master Out Slave In
    output reg         cs_n,         // Chip select (active low)
    output reg         busy,         // Busy signal
    output reg  [7:0]  data_out      // Received data
);

    // Parameters
    parameter CPOL = 0;              // Clock polarity (0: idle low, 1: idle high)
    parameter CPHA = 0;              // Clock phase (0: sample on first edge, 1: sample on second edge)
    parameter CLK_DIV = 4;           // Clock divider (system_clk / CLK_DIV = sclk)

    // Internal registers
    reg [7:0]  tx_data;              // Transmit data register
    reg [7:0]  rx_data;              // Receive data register
    reg [3:0]  bit_count;            // Bit counter
    reg [7:0]  clk_count;            // Clock divider counter
    reg        spi_clk_en;           // SPI clock enable

    // SPI clock generation
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            clk_count <= 0;
            sclk <= CPOL;
        end 
        else if (spi_clk_en) begin
            if (clk_count == CLK_DIV/2 - 1) begin
                sclk <= ~sclk;
                clk_count <= 0;
            end 
            else begin
                clk_count <= clk_count + 1;
            end
        end 
        else begin
            sclk <= CPOL;
            clk_count <= 0;
        end
    end

    // State machine states
    localparam IDLE = 2'b00;
    localparam SETUP = 2'b01;
    localparam TRANSFER = 2'b10;
    localparam FINISH = 2'b11;
    
    reg [1:0] state, next_state;

    // State register
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            state <= IDLE;
        else
            state <= next_state;
    end

    // Next state logic
    always @(*) begin
        case (state)
            IDLE: 
                if (start)
                    next_state = SETUP;
                else
                    next_state = IDLE;
                    
            SETUP:
                next_state = TRANSFER;
                
            TRANSFER:
                if (bit_count == 7 && clk_count == CLK_DIV/2 - 1 && sclk != CPOL)
                    next_state = FINISH;
                else
                    next_state = TRANSFER;
                    
            FINISH:
                next_state = IDLE;
                
            default:
                next_state = IDLE;
        endcase
    end

    // Sample MISO on appropriate clock edge based on CPHA
    wire sample_edge = (CPHA == 0) ? (sclk != CPOL) : (sclk == CPOL);
    
    // Control logic
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            cs_n <= 1'b1;
            tx_data <= 8'h00;
            rx_data <= 8'h00;
            bit_count <= 0;
            busy <= 1'b0;
            data_out <= 8'h00;
            spi_clk_en <= 1'b0;
        end 
        else begin
            case (state)
                IDLE: begin
                    cs_n <= 1'b1;
                    bit_count <= 0;
                    busy <= 1'b0;
                    spi_clk_en <= 1'b0;
                    
                    if (start) begin
                        busy <= 1'b1;
                        tx_data <= data_in;
                    end
                end
                
                SETUP: begin
                    cs_n <= 1'b0;
                    spi_clk_en <= 1'b1;
                    busy <= 1'b1;
                end
                
                TRANSFER: begin
                    busy <= 1'b1;
                    
                    if (clk_count == CLK_DIV/2 - 1) begin
                        if (sample_edge) begin
                            rx_data <= {rx_data[6:0], miso};
                            
                            if (sclk != CPOL)
                                bit_count <= bit_count + 1;
                        end
                    end
                end
                
                FINISH: begin
                    cs_n <= 1'b1;
                    spi_clk_en <= 1'b0;
                    busy <= 1'b0;
                    data_out <= rx_data;
                end
            endcase
        end
    end

    // MOSI output is MSB of tx_data
    assign mosi = tx_data[7-bit_count];

endmodule