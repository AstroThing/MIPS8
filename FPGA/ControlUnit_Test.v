`timescale 1ns / 1ps

module ControlUnit_Test;

	// Inputs
	reg [4:0] opcode;

	// Outputs
	wire reg_write;
	wire is_move;
	wire is_mem_access;
	wire is_imm;
	wire [2:0] alu_func;
	wire flags_write;
	wire dm_write;
	wire is_jz;
	wire is_jnz;
	wire is_jl;
	wire is_jg;
	wire is_jump;

	// Instantiate the Unit Under Test (UUT)
	ControlUnit uut (
		.opcode(opcode), 
		.reg_write(reg_write), 
		.is_move(is_move), 
		.is_mem_access(is_mem_access), 
		.is_imm(is_imm), 
		.alu_func(alu_func), 
		.flags_write(flags_write), 
		.dm_write(dm_write), 
		.is_jz(is_jz), 
		.is_jnz(is_jnz), 
		.is_jl(is_jl), 
		.is_jg(is_jg), 
		.is_jump(is_jump)
	);

	integer i;
	initial begin
		// Initialize Inputs
		opcode = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		for(i = 0; i < 18; i = i + 1)
		begin
			opcode = i;
			#100;
		end
	end
      
endmodule

