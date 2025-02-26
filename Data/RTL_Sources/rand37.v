module Random_Circuit_9 (
    input A, B, clk, rst,
    output reg Q
);
    wire xor1_out, xor2_out;
    
    xor (xor1_out, A, B);
    xor (xor2_out, xor1_out, B);
    
    always @(posedge clk or posedge rst) begin
        if (rst)
            Q <= 0;
        else
            Q <= xor2_out;
    end
endmodule
