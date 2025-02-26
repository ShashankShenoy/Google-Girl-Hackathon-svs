module full_adder_flipflop (
    input wire clk,
    input wire rst,
    input wire a,
    input wire b,
    input wire cin,
    output reg sum
);

wire sum_out, carry_out;

assign sum_out = a ^ b ^ cin;  // XOR gates for sum
assign carry_out = (a & b) | (b & cin) | (a & cin); // Carry logic

always @(posedge clk or posedge rst) begin
    if (rst)
        sum <= 0;
    else
        sum <= sum_out;
end

endmodule
