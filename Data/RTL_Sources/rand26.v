module Random_Circuit_20 (
    input A, B, clk, rst,
    output reg Q
);
    wire nand_out, or_out, and_out;
    
    nand (nand_out, A, B);
    or (or_out, A, B);
    and (and_out, A, B);
    
    always @(posedge clk or posedge rst) begin
        if (rst)
            Q <= 0;
        else
            Q <= nand_out & or_out | and_out;
    end
endmodule
