module xor3(
    input a, b, c,
    output out
);
    assign out = a ^ b ^ c;
endmodule