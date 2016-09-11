`timescale 1ns / 1ps

module ALU_Test;

	// Inputs
	reg [7:0] op1;
	reg [7:0] op2;
	reg [2:0] func;

	// Outputs
	wire [7:0] result;
	wire zero;
	wire sign;
	wire ovf;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.op1(op1), 
		.op2(op2), 
		.func(func), 
		.result(result), 
		.zero(zero), 
		.sign(sign), 
		.ovf(ovf)
	);

	initial begin
		// Initialize Inputs
		op1 = 0;
		op2 = 0;
		func = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		op1 = -8;
		op2 = 1;
		func = 2;
		#100;

	end
      
endmodule

