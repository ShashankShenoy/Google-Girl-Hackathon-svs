module gray_to_binary_converter(
    input [3:0] gray,
    output [3:0] binary
);
    // Binary conversion: B[i] = XOR of all gray bits from G[n] to G[i]
    // where n is the MSB position
    assign binary[3] = gray[3];
    assign binary[2] = binary[3] ^ gray[2];
    assign binary[1] = binary[2] ^ gray[1];
    assign binary[0] = binary[1] ^ gray[0];
    
endmodule