module Random_Circuit_41 (
    input A, B, clk, rst,
    output reg Q
);
    always @(posedge clk or posedge rst) begin
        if (rst)
            Q <= 0;
        else
            Q <= (A ^ B) & ~(A & B) | (A | B);  // XOR, NAND, OR logic
    end
endmodule
