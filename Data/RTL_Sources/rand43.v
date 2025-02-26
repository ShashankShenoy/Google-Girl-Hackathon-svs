module Random_Circuit_3 (
    input A, B, clk, rst,
    output reg Q
);
    wire and1_out, and2_out, or1_out;
    
    and (and1_out, A, B);
    and (and2_out, and1_out, B);
    or (or1_out, and1_out, and2_out);
    
    always @(posedge clk or posedge rst) begin
        if (rst)
            Q <= 0;
        else
            Q <= or1_out;
    end
endmodule
