module Demux_1to2 (
    input A,
    input S,
    output Y0,
    output Y1
);
    assign Y0 = (S == 0) ? A : 0;
    assign Y1 = (S == 1) ? A : 0;
endmodule
