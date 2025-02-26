module T_FlipFlop (
    input T,
    input clk,
    input rst,
    output reg Q
);
    always @(posedge clk or posedge rst) begin
        if (rst)
            Q <= 0;  // Reset Q to 0
        else if (T)
            Q <= ~Q; // Toggle the output when T is 1
    end
endmodule
