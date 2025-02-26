module barrel_shifter_16bit(
    input [15:0] data_in,
    input [3:0] shift_amount,
    input direction, // 0 for right, 1 for left
    input type, // 0 for logical, 1 for arithmetic (right shift only)
    output [15:0] data_out
);
    // Internal wires for shift stages
    wire [15:0] stage0, stage1, stage2, stage3;
    
    // Reverse input data for left shift operations
    wire [15:0] data_reversed_in;
    genvar j;
    generate
        for (j = 0; j < 16; j = j + 1) begin: reverse_in
            assign data_reversed_in[j] = data_in[15-j];
        end
    endgenerate
    
    // Select between original and reversed data based on direction
    wire [15:0] shift_in;
    assign shift_in = direction ? data_reversed_in : data_in;
    
    // Stage 0: Shift by 0 or 1 bits
    assign stage0 = shift_amount[0] ? 
                     {(type & ~direction) ? shift_in[15] : 1'b0, shift_in[15:1]} : 
                     shift_in;
    
    // Stage 1: Shift by 0 or 2 bits
    assign stage1 = shift_amount[1] ? 
                     {(type & ~direction) ? {2{stage0[15]}} : 2'b0, stage0[15:2]} : 
                     stage0;
    
    // Stage 2: Shift by 0 or 4 bits
    assign stage2 = shift_amount[2] ? 
                     {(type & ~direction) ? {4{stage1[15]}} : 4'b0, stage1[15:4]} : 
                     stage1;
    
    // Stage 3: Shift by 0 or 8 bits
    assign stage3 = shift_amount[3] ? 
                     {(type & ~direction) ? {8{stage2[15]}} : 8'b0, stage2[15:8]} : 
                     stage2;
    
    // Reverse output data for left shift operations
    wire [15:0] data_reversed_out;
    generate
        for (j = 0; j < 16; j = j + 1) begin: reverse_out
            assign data_reversed_out[j] = stage3[15-j];
        end
    endgenerate
    
    // Select between original and reversed output based on direction
    assign data_out = direction ? data_reversed_out : stage3;
    
endmodule