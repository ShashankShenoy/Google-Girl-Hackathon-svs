module uart_tx(
    input clk_3125, 
    input parity_type, tx_start, 
    input [7:0] data, 
    output reg tx, tx_done
);

parameter S_IDLE = 3'b000;
parameter S_START = 3'b001;
parameter S_DATA = 3'b010;
parameter S_PARITY = 3'b011;
parameter S_STOP = 3'b100;

parameter clk = 14; // Baud rate division factor

reg [2:0] current_state; 
reg [3:0] baud_counter;  
reg [7:0] shift_register; 
reg parity_bit;          
reg [2:0] bit_counter; // Combined data bit index and bit counting

initial begin
    tx = 1;
    tx_done = 0;
    current_state = S_IDLE;
    baud_counter = 0;
end

always @(posedge clk_3125) begin
    case (current_state)

        S_IDLE: begin
            tx <= 1;                 
            tx_done <= 0;             
            if (tx_start) begin       
                shift_register <= data; // Load data into shift register
                parity_bit <= parity_type ? ~^data : ^data; // Calculate parity
                baud_counter <= 0;       
                bit_counter <= 7; // Initialize counter to track all bits
                current_state <= S_START; 
            end
        end

        S_START: begin
            tx <= 0;  // Start bit
            if (baud_counter == clk - 1) begin
                baud_counter <= 0;
                current_state <= S_DATA; 
            end else
                baud_counter <= baud_counter + 1;
        end

        S_DATA: begin
            tx <= shift_register[bit_counter]; // Send current bit
            if (baud_counter == clk - 1) begin
                baud_counter <= 0;
                if (bit_counter == 0) 
                    current_state <= S_PARITY; // All data bits sent
                else
                    bit_counter <= bit_counter - 1; // Decrement counter
            end else
                baud_counter <= baud_counter + 1;
        end

        S_PARITY: begin
            tx <= parity_bit;  // Send parity bit
            if (baud_counter == clk - 1) begin
                baud_counter <= 0;
                current_state <= S_STOP; 
            end else
                baud_counter <= baud_counter + 1;
        end

        S_STOP: begin
            tx <= 1;  // Stop bit
            if (baud_counter == clk - 1) begin
                baud_counter <= 0;
                tx_done <= 1;        
                current_state <= S_IDLE; // Return to idle
            end else
                baud_counter <= baud_counter + 1;
        end

        default: current_state <= S_IDLE; 
    endcase
end
endmodule
