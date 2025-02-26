module MUX_8to1 (
    input A,
    input B,
    input C,
    input D,
    input E,
    input F,
    input G,
    input H,
    input [2:0] S,
    output Y
);
    assign Y = (S == 3'b000) ? A :
               (S == 3'b001) ? B :
               (S == 3'b010) ? C :
               (S == 3'b011) ? D :
               (S == 3'b100) ? E :
               (S == 3'b101) ? F :
               (S == 3'b110) ? G : H;
endmodule
