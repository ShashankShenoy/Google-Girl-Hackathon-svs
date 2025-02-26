module SR_FlipFlop (
    input S,
    input R,
    input clk,
    input rst,
    output reg Q
);
    always @(posedge clk or posedge rst) begin
        if (rst)
            Q <= 0;  // Reset Q to 0
        else begin
            case ({S, R})
                2'b00: Q <= Q;          // No change
                2'b01: Q <= 0;          // Reset
                2'b10: Q <= 1;          // Set
                2'b11: Q <= 1'bx;       // Invalid state (both S and R are 1)
            endcase
        end
    end
endmodule
