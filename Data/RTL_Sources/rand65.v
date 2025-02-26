module xnor_and_flipflop (
    input wire clk,
    input wire rst,
    input wire a,
    input wire b,
    output reg q
);

wire xnor_out, and_out;

assign xnor_out = ~(a ^ b); // XNOR gate
assign and_out = xnor_out & a; // AND gate

always @(posedge clk or posedge rst) begin
    if (rst)
        q <= 0;
    else
        q <= and_out;
end

endmodule
