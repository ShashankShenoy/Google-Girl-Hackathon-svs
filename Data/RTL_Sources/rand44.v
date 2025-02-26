module Random_Circuit_2 (
    input A, B, clk, rst,
    output reg Q
);
    wire nand_out, nor_out, xor_out;
    
    nand (nand_out, A, B);
    nor (nor_out, A, B);
    xor (xor_out, A, B);
    
    always @(posedge clk or posedge rst) begin
        if (rst)
            Q <= 0;
        else
            Q <= nand_out & nor_out | xor_out;
    end
endmodule
