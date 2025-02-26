module binary_to_gray_converter(
    input [3:0] binary,
    output [3:0] gray
);
    // Gray code conversion: G[i] = B[i] XOR B[i+1]
    // MSB remains the same
    assign gray[3] = binary[3];
    assign gray[2] = binary[3] ^ binary[2];
    assign gray[1] = binary[2] ^ binary[1];
    assign gray[0] = binary[1] ^ binary[0];
    
endmodule