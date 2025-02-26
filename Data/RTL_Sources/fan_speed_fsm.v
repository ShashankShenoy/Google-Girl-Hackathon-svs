module fan_speed_controller(
    input clk,
    input reset,
    input button,
    output reg [1:0] speed
);
    parameter OFF = 2'b00, LOW = 2'b01, MEDIUM = 2'b10, HIGH = 2'b11;
    
    reg [1:0] current_state, next_state;
    reg button_prev;
    wire button_pressed;
    
    assign button_pressed = button && !button_prev;
    
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            current_state <= OFF;
            button_prev <= 0;
        end else begin
            current_state <= next_state;
            button_prev <= button;
        end
    end
    
    always @(*) begin
        case (current_state)
            OFF: next_state = button_pressed ? LOW : OFF;
            LOW: next_state = button_pressed ? MEDIUM : LOW;
            MEDIUM: next_state = button_pressed ? HIGH : MEDIUM;
            HIGH: next_state = button_pressed ? OFF : HIGH;
            default: next_state = OFF;
        endcase
    end
    
    always @(*) begin
        case (current_state)
            OFF: speed = 2'b00;
            LOW: speed = 2'b01;
            MEDIUM: speed = 2'b10;
            HIGH: speed = 2'b11;
            default: speed = 2'b00;
        endcase
    end
endmodule