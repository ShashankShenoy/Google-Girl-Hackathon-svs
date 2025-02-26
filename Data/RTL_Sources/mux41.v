module MUX_4to1 (
    input A,
    input B,
    input C,
    input D,
    input [1:0] S,
    output Y
);
    assign Y = (S == 2'b00) ? A :
               (S == 2'b01) ? B :
               (S == 2'b10) ? C : D;
endmodule
