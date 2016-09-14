`timescale 1ns / 1ps

module InstructionMemory(
	input [7:0] address,
	output reg [15:0] data
	);

	always @ (address)
	begin
		case(address)
			8'h00: data = 16'h4814;
			8'h01: data = 16'h4A2E;
			8'h02: data = 16'h880;
			8'h03: data = 16'h3600;
			8'h04: data = 16'h4C0E;
			8'h05: data = 16'h4700;
			8'h06: data = 16'hf800; //Stop
			default: data = 16'h0000;
		endcase
	end
	
endmodule
