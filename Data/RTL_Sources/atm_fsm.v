module atm_machine_fsm(
    input clk,
    input reset,
    input card_inserted,
    input [3:0] pin_entry,
    input withdrawal_request,
    input receipt_request,
    input exit_request,
    output reg card_accepted,
    output reg pin_ok,
    output reg dispense_cash,
    output reg print_receipt,
    output reg eject_card,
    output reg [2:0] state_out
);
    parameter IDLE = 3'b000, PIN_ENTRY = 3'b001, TRANSACTION = 3'b010, RECEIPT = 3'b011, EXIT = 3'b100;
    parameter CORRECT_PIN = 4'b1234;
    
    reg [2:0] state;
    
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            state <= IDLE;
            card_accepted <= 0;
            pin_ok <= 0;
            dispense_cash <= 0;
            print_receipt <= 0;
            eject_card <= 0;
            state_out <= IDLE;
        end else begin
            case (state)
                IDLE: begin
                    if (card_inserted) begin
                        state <= PIN_ENTRY;
                        card_accepted <= 1;
                    end
                    eject_card <= 0;
                    pin_ok <= 0;
                    dispense_cash <= 0;
                    print_receipt <= 0;
                end
                
                PIN_ENTRY: begin
                    if (pin_entry == CORRECT_PIN) begin
                        state <= TRANSACTION;
                        pin_ok <= 1;
                    end
                    else if (exit_request) begin
                        state <= EXIT;
                    end
                end
                
                TRANSACTION: begin
                    if (withdrawal_request) begin
                        dispense_cash <= 1;
                        state <= RECEIPT;
                    end
                    else if (exit_request) begin
                        state <= EXIT;
                    end
                end
                
                RECEIPT: begin
                    dispense_cash <= 0;
                    if (receipt_request) begin
                        print_receipt <= 1