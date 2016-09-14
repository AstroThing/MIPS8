`timescale 1ns / 1ps

module DataMemory(
	input clk,
	input dm_write,
	input [3:0] address,
	input [7:0] write_data,
	output [7:0] read_data
	);
	 
	reg [7:0] return_data;
	reg [7:0] memory [0:15];
	assign read_data = return_data;
	
	always @ (posedge clk)
	if (dm_write)
		memory[address] <= write_data;
	else
		return_data <= memory[address];
		
endmodule
