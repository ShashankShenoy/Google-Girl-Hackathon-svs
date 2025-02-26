module D_FlipFlop (
    input D,
    input clk,
    input rst,
    output reg Q
);
    always @(posedge clk or posedge rst) begin
        if (rst)
            Q <= 0;  // Reset Q to 0
        else
            Q <= D;  // Q follows D
    end
endmodule
