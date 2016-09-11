`timescale 1ns / 1ps

module CPU_Test;

	// Inputs
	reg clk;

	// Instantiate the Unit Under Test (UUT)
	CPU uut (
		.clk(clk)
	);

	initial begin
		// Initialize Inputs
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	
	always
	begin
	#50
	clk = !clk;
	end
      
endmodule

