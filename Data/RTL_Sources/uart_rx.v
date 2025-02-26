
module uart_rx(
    input clk_3125,
    input rx,
    output reg [7:0] rx_msg,
    output reg rx_parity,
    output reg rx_complete
);


parameter S_IDLE = 3'b000;
parameter S_START = 3'b001;
parameter S_DATA = 3'b010;
parameter S_PARITY = 3'b011;
parameter S_STOP = 3'b100;
parameter clk = 14;

reg [2:0] current_state;
reg [7:0] rx_shift_register;
reg [3:0] baud_counter;
reg [2:0] index;
reg calculated_parity;

initial begin
    rx_msg = 0;
    rx_parity = 0;
    rx_complete = 0;
    current_state = S_IDLE;
end

always @(posedge clk_3125) begin
    case (current_state)
        S_IDLE: begin
            rx_complete <= 0;
            baud_counter <= 0;
            index <= 7;
            calculated_parity <= 0;
            if (~rx) 
                current_state <= S_START;
        end

        S_START: begin
            if (baud_counter == clk - 2) begin
                if (~rx) 
                    current_state <= S_DATA;
                else 
                    current_state <= S_IDLE;
                baud_counter <= 0;
            end else 
                baud_counter <= baud_counter + 1;
        end

        S_DATA: begin
            if (baud_counter == clk - 1) begin
                baud_counter <= 0;
                rx_shift_register[index] <= rx;
                calculated_parity <= calculated_parity ^ rx;
                if (index == 0) 
                    current_state <= S_PARITY;
                else 
                    index <= index - 1;
            end else 
                baud_counter <= baud_counter + 1;
        end

        S_PARITY: begin
            if (baud_counter == clk - 1) begin
                rx_parity <= rx;
                current_state <= S_STOP;
                baud_counter <= 0;
            end else 
                baud_counter <= baud_counter + 1;
        end

        S_STOP: begin
            if (baud_counter == clk - 1) begin
                if (rx && (calculated_parity == rx_parity)) begin
                    rx_msg <= rx_shift_register;
                    rx_complete <= 1;
                end else 
                    rx_msg <= 8'b00000000;
                current_state <= S_IDLE;
                baud_counter <= 0;
            end else 
                baud_counter <= baud_counter + 1;
        end

        default: current_state <= S_IDLE;
    endcase
end
endmodule