module Random_Circuit_11 (
    input A, B, clk, rst,
    output reg Q
);
    wire and_out, or_out, xor_out, not_out;
    
    and (and_out, A, B);
    or (or_out, A, B);
    xor (xor_out, A, B);
    not (not_out, A);
    
    always @(posedge clk or posedge rst) begin
        if (rst)
            Q <= 0;
        else
            Q <= (and_out | or_out) & xor_out ^ not_out;
    end
endmodule
