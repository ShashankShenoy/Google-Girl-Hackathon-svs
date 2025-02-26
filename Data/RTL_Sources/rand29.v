module Random_Circuit_17 (
    input A, B, clk, rst,
    output reg Q
);
    wire xor_out, nor_out, and_out, or_out;
    
    xor (xor_out, A, B);
    nor (nor_out, A, B);
    and (and_out, A, B);
    or (or_out, A, B);
    
    always @(posedge clk or posedge rst) begin
        if (rst)
            Q <= 0;
        else
            Q <= xor_out & nor_out | and_out ^ or_out;
    end
endmodule
