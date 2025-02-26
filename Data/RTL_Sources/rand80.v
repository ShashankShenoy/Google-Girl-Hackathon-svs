module Random_Circuit_28 (
    input A, B, clk, rst,
    output reg Q
);
    always @(posedge clk or posedge rst) begin
        if (rst)
            Q <= 0;
        else
            Q <= (A & B) & ~(A | B);  // AND, NOR logic
    end
endmodule

