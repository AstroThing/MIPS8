`timescale 1ns / 1ps

module ControlUnit(
	input [4:0] opcode,
	output reg reg_write,
	output reg is_move,
	output reg is_mem_access,
	output reg is_li,
	output reg is_imm,
	output reg [2:0] alu_func,
	output reg flags_write,
	output reg dm_write,
	output reg is_jz,
	output reg is_jnz,
	output reg is_jl,
	output reg is_jg,
	output reg is_jump
	);

	parameter
		NOP = 5'd0,
		ADD = 5'd1,
		SUB = 5'd2,
		OR = 5'd3,
		AND = 5'd4,
		XOR = 5'd5,
		MOV = 5'd6,
		LW = 5'd7,
		SW = 5'd8,
		LI = 5'd9,
		ADDI = 5'd10,
		SUBI = 5'd11,
		CMP = 5'd12,
		JZ = 5'd13,
		JNZ = 5'd14,
		JG = 5'd15,
		JL = 5'd16,
		JUMP = 5'd17;

	always @ (opcode)
	begin
	  reg_write = 0;
	  is_move = 0;
	  is_mem_access = 0;
	  is_li = 0;
	  is_imm = 0;
	  alu_func = 3'd0;
	  flags_write = 0;
	  dm_write = 0;
	  is_jz = 0;
	  is_jnz = 0;
	  is_jl = 0;
	  is_jg = 0;
	  is_jump = 0;

	  case(opcode)
		 ADD:
		 begin
			reg_write = 1;
			flags_write = 1;
			alu_func = 3'd1;
		 end
		 
		 SUB:
		 begin
			reg_write = 1;
			flags_write = 1;
			alu_func = 3'd2;
		 end
		 
		 OR:
		 begin
			reg_write = 1;
			flags_write = 1;
			alu_func = 3'd4;
		 end
		 
		 AND:
		 begin
			reg_write = 1;
			flags_write = 1;
			alu_func = 3'd3;
		 end
		 
		 XOR:
		 begin
			reg_write = 1;
			flags_write = 1;
			alu_func = 3'd5;
		 end

		 MOV:
		 begin
			reg_write = 1;
			is_move = 1;
		 end

		 LW:
		 begin
			reg_write = 1;
			is_mem_access = 1;
		 end
		 
		 SW:
			dm_write = 1;

		 LI:
		 begin
			reg_write = 1;
			is_li = 1;
		 end

		 ADDI:
		 begin
			reg_write = 1;
			is_imm = 1;
			flags_write = 1;
			alu_func = 3'd1;
		 end
			
		 SUBI:
		 begin
			reg_write = 1;
			is_imm = 1;
			flags_write = 1;
			alu_func = 3'd2;
		 end
		 
		 CMP:
		 begin
			flags_write = 1;
			alu_func = 3'd2;
		 end
			
		 JZ:
			is_jz = 1;
			
		 JNZ:
			is_jnz = 1;
			
		 JG:
			is_jg = 1;
			
		 JL:
			is_jl = 1;
			
		 JUMP:
			is_jump = 1;
	  endcase
	  end

endmodule
