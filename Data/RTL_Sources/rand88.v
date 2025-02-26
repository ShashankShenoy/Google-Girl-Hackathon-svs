module Random_Circuit_36 (
    input A, B, clk, rst,
    output reg Q
);
    always @(posedge clk or posedge rst) begin
        if (rst)
            Q <= 0;
        else
            Q <= ~(A | B) & ~(A & B);  // NOR, NAND logic
    end
endmodule

