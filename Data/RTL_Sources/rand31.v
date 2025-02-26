module Random_Circuit_15 (
    input A, B, clk, rst,
    output reg Q
);
    wire or_out, and_out, xor_out;
    
    or (or_out, A, B);
    and (and_out, A, B);
    xor (xor_out, A, B);
    
    always @(posedge clk or posedge rst) begin
        if (rst)
            Q <= 0;
        else
            Q <= or_out & and_out | xor_out;
    end
endmodule
