`timescale 1ns / 1ps

module DebugUnit_Test;

	// Inputs
	reg start;
	reg [4:0] opcode;

	// Outputs
	wire pc_enabled;
	wire stopped;

	// Instantiate the Unit Under Test (UUT)
	DebugUnit uut (
		.start(start), 
		.opcode(opcode), 
		.pc_enabled(pc_enabled), 
		.stopped(stopped)
	);

	initial begin
		// Initialize Inputs
		start = 0;
		opcode = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		start = 1;
		#10
		start = 0;
		#500
		opcode = 5'b11111;
		#100
		opcode = 5'b0;
		start = 1;
		#10
		start = 0;

	end
      
endmodule

