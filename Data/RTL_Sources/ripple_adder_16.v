module ripple_carry_adder_16bit(
    input [15:0] a, b,
    input cin,
    output [15:0] sum,
    output cout
);
    wire [15:0] carry;
    
    // First full adder with input carry
    full_adder fa0(
        .a(a[0]),
        .b(b[0]),
        .cin(cin),
        .sum(sum[0]),
        .cout(carry[0])
    );
    
    // Generate the remaining 15 full adders
    genvar i;
    generate
        for (i = 1; i < 16; i = i + 1) begin: gen_adders
            full_adder fa(
                .a(a[i]),
                .b(b[i]),
                .cin(carry[i-1]),
                .sum(sum[i]),
                .cout(carry[i])
            );
        end
    endgenerate
    
    // Final carry out
    assign cout = carry[15];
    
endmodule

// Full adder module
module full_adder(
    input a, b, cin,
    output sum, cout
);
    assign sum = a ^ b ^ cin;
    assign cout = (a & b) | (a & cin) | (b & cin);
endmodule