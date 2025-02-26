module Random_Circuit_8 (
    input A, B, clk, rst,
    output reg Q
);
    wire nand_out;
    
    nand (nand_out, A, B);
    
    always @(posedge clk or posedge rst) begin
        if (rst)
            Q <= 0;
        else
            Q <= nand_out;
    end
endmodule
