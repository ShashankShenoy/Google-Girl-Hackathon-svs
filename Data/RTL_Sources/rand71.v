module Random_Circuit_22 (
    input A, B, clk, rst,
    output reg Q
);
    always @(posedge clk or posedge rst) begin
        if (rst)
            Q <= 0;
        else
            Q <= (A ^ B) | (A & B) & (A | B);  // XOR, AND, OR logic
    end
endmodule

endmodule
