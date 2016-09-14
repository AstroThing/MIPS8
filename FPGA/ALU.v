`timescale 1ns / 1ps

module ALU(
	input [7:0] op1,
	input [7:0] op2,
	input [2:0] func,
	output reg [7:0] result,
	output reg zero,
	output reg sign,
	output reg ovf
	);

	parameter ADD = 3'd1;
	parameter SUB = 3'd2;
	parameter AND = 3'd3;
	parameter OR = 3'd4;
	parameter XOR = 3'd5;
	
	always @ (op1 or op2 or func or result)
	begin
		case(func)
			ADD: result = op1 + op2;
			SUB: result = op1 - op2;
			AND: result = op1 & op2;
			OR: result = op1 | op2;
			XOR: result = op1 ^ op2;
			default: result = 8'h0;
		endcase
		
		zero = !(|result);
		sign = result >> 7;
		
		if(func == ADD)
			ovf = (op1 >= 0 && op2 >= 0 && result < 0) || (op1 < 0 && op2 < 0 && result >= 0);
		else if(func == SUB)
			ovf = (op1 >= 0 && op2 < 0 && result < 0) || (op1 < 0 && op2 >= 0 && result >= 0);
		else
			ovf = 0;
	end
	
endmodule
