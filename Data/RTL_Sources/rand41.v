module Random_Circuit_5 (
    input A, B, clk, rst,
    output reg Q
);
    wire and_out, or_out, nor_out, xor_out;
    
    and (and_out, A, B);
    or (or_out, A, B);
    nor (nor_out, A, B);
    xor (xor_out, A, B);
    
    always @(posedge clk or posedge rst) begin
        if (rst)
            Q <= 0;
        else
            Q <= and_out & or_out | nor_out & xor_out;
    end
endmodule
