module carry_lookahead_adder_16bit(
    input [15:0] a, b,
    input cin,
    output [15:0] sum,
    output cout
);
    wire [15:0] p, g; // Propagate and generate signals
    wire [16:0] c;    // Carry signals (including cin)
    
    // Set initial carry in
    assign c[0] = cin;
    
    // Generate propagate and generate signals
    genvar i;
    generate
        for (i = 0; i < 16; i = i + 1) begin: pg_gen
            assign p[i] = a[i] ^ b[i]; // Propagate: a XOR b
            assign g[i] = a[i] & b[i]; // Generate: a AND b
        end
    endgenerate
    
    // Carry lookahead logic for each bit
    generate
        for (i = 0; i < 16; i = i + 1) begin: carry_gen
            assign c[i+1] = g[i] | (p[i] & c[i]);
        end
    endgenerate
    
    // Sum calculation
    generate
        for (i = 0; i < 16; i = i + 1) begin: sum_gen
            assign sum[i] = p[i] ^ c[i];
        end
    endgenerate
    
    // Final carry out
    assign cout = c[16];
    
endmodule