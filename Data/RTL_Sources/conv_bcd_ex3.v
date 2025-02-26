module bcd_to_excess3_converter(
    input [3:0] bcd,
    output [3:0] excess3
);
    // Excess-3 is BCD + 3
    // Truth table implementation
    assign excess3[0] = ~bcd[0];
    assign excess3[1] = (bcd[1] & bcd[0]) | (~bcd[1] & ~bcd[0]);
    assign excess3[2] = (bcd[2] & bcd[0]) | (bcd[2] & bcd[1]) | (~bcd[2] & ~bcd[1] & ~bcd[0]);
    assign excess3[3] = bcd[3] | (bcd[2] & bcd[0]) | (bcd[2] & bcd[1]);
    
    // Check for valid BCD input (0-9)
    // If outside the valid range, the behavior is not defined
    
endmodule