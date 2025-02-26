module Random_Circuit_18 (
    input A, B, clk, rst,
    output reg Q
);
    wire xor_out, and_out;
    
    xor (xor_out, A, B);
    and (and_out, A, B);
    
    always @(posedge clk or posedge rst) begin
        if (rst)
            Q <= 0;
        else
            Q <= xor_out & and_out;
    end
endmodule
