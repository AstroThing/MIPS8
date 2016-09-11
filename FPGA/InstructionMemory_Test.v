`timescale 1ns / 1ps

module InstructionMemory_Test;

	// Inputs
	reg [7:0] address;

	// Outputs
	wire [15:0] data;

	// Instantiate the Unit Under Test (UUT)
	InstructionMemory uut (
		.address(address), 
		.data(data)
	);
	
	integer i;
	initial begin
		// Initialize Inputs
		address = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		for(i = 0; i < 9; i = i + 1)
		begin
			address = i;
			#100;
		end
	end
      
endmodule

