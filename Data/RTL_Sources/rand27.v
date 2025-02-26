module Random_Circuit_19 (
    input A, B, clk, rst,
    output reg Q
);
    wire and_out, nor_out;
    
    and (and_out, A, B);
    nor (nor_out, A, B);
    
    always @(posedge clk or posedge rst) begin
        if (rst)
            Q <= 0;
        else
            Q <= and_out | nor_out;
    end
endmodule
