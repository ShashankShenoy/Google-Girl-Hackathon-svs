module Random_Circuit_16 (
    input A, B, clk, rst,
    output reg Q
);
    wire not_out, and_out;
    
    not (not_out, A);
    and (and_out, not_out, B);
    
    always @(posedge clk or posedge rst) begin
        if (rst)
            Q <= 0;
        else
            Q <= and_out;
    end
endmodule
