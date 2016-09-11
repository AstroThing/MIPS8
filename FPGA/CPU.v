`timescale 1ns / 1ps

module CPU(
    input clk
    );

reg [7:0] PC = 0;

//InstructionMemory wires
wire [15:0] instr;

//RegisterFile wires
wire [7:0] read_data1;
wire [7:0] read_data2;
wire [7:0] write_data;

//ALU wires
wire [7:0] op2;
wire [7:0] result;
wire zero;
wire sign;
wire ovf;

//DataMemory wires
wire [7:0] dm_read_data;

//ControlUnit wires
wire reg_write;
wire is_move;
wire is_mem_access;
wire is_li;
wire is_imm;
wire [2:0] alu_func;
wire flags_write;
wire dm_write;
wire is_jz;
wire is_jnz;
wire is_jl;
wire is_jg;
wire is_jump;

//Flags wires
wire zf;
wire sf;
wire of;

//----------------------CPU Modules----------------------//
ControlUnit CU(instr[15:11], reg_write, is_move, is_mem_access, is_li, is_imm, alu_func, flags_write, dm_write, is_jz, is_jnz, is_jl, is_jg, is_jump);

InstructionMemory IM(PC, instr);

RegisterFile RF(clk, reg_write, instr[10:9], instr[8:7], instr[10:9], write_data, read_data1, read_data2);

ALU ALU(read_data1, op2, alu_func, result, zero, sign, ovf);

DataMemory DM(clk, dm_write, read_data2[3:0], read_data1, dm_read_data);

Flags flags(flags_write, zero, sign, ovf, zf, sf, of);
//------------------------------------------------------//

//--------------------External Logic--------------------//
//Multiplexors
assign write_data = is_mem_access ? dm_read_data : (is_move ? read_data2 : (is_li ? instr[8:1] : result));
assign op2 = is_imm ? instr[8:1] : read_data2;

//Flags
wire jz_and = zf & is_jz;
wire jnz_and = ~zf & is_jnz;
wire jl_and = (sf ^ of) & is_jl;
wire jg_and = ~(sf ^ of) & ~zf & is_jg;
wire flags_result = jz_and | jnz_and | jl_and | jg_and | is_jump;


//Program Counter
always @ (posedge clk)
begin
	PC <= flags_result ? instr[10:3] : (PC + 1);
end
//------------------------------------------------------//
	
endmodule
