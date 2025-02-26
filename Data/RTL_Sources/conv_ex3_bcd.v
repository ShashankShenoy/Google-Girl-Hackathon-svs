module excess3_to_bcd_converter(
    input [3:0] excess3,
    output [3:0] bcd
);
    // BCD is Excess-3 - 3
    // Truth table implementation
    assign bcd[0] = ~excess3[0];
    assign bcd[1] = (excess3[1] & excess3[0]) | (~excess3[1] & ~excess3[0]);
    assign bcd[2] = (excess3[2] & excess3[0] & excess3[1]) | 
                   (excess3[2] & ~excess3[0] & ~excess3[1]) | 
                   (~excess3[2] & ~excess3[0] & excess3[1]) | 
                   (~excess3[2] & excess3[0] & ~excess3[1]);
    assign bcd[3] = excess3[3] & ~(~excess3[2] & ~excess3[1] & ~excess3[0]);
    
    // Check for valid Excess-3 input (3-12)
    // If outside the valid range, the behavior is not defined
    
endmodule