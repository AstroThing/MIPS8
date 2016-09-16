`timescale 1ns / 1ps

module CPU_Test;

	// Inputs
	reg clk;
	reg start;

	// Outputs
	wire stopped;

	// Instantiate the Unit Under Test (UUT)
	CPU uut (
		.clk(clk), 
		.start(start), 
		.stopped(stopped)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		start = 0;

		// Wait 100 ns for global reset to finish
		#100;
		start = 1;
		#100;
		start = 0;
        
		// Add stimulus here
	end
	
	always
	begin
		#100
		clk = !clk;
	end
      
endmodule

