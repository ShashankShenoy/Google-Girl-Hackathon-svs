module Random_Circuit_4 (
    input A, B, C, clk, rst,
    output reg Q
);
    wire and_out, or_out;
    
    and (and_out, A, B, C);
    or (or_out, A, B, C);
    
    always @(posedge clk or posedge rst) begin
        if (rst)
            Q <= 0;
        else
            Q <= and_out | or_out;
    end
endmodule
