module Random_Circuit_13 (
    input A, B, clk, rst,
    output reg Q
);
    wire and_out, xor_out;
    
    and (and_out, A, B);
    xor (xor_out, A, B);
    
    always @(posedge clk or posedge rst) begin
        if (rst)
            Q <= 0;
        else
            Q <= and_out ^ xor_out;
    end
endmodule
