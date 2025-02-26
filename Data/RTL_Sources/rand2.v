module half_adder_flipflop (
    input wire clk,
    input wire rst,
    input wire a,
    input wire b,
    output reg sum_out
);

wire sum, carry;

assign sum   = a ^ b; // XOR gate for sum
assign carry = a & b; // AND gate for carry (not stored)

always @(posedge clk or posedge rst) begin
    if (rst)
        sum_out <= 0;
    else
        sum_out <= sum;
end

endmodule
