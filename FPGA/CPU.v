`timescale 1ns / 1ps

module CPU(
    input clk
    );

reg [7:0] PC;

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

Flags flags(flags_write, zero, sign, ovf, zf, sf, of);
ControlUnit CU(instr[15:11], reg_write, is_move, is_mem_access, is_imm, alu_func, flags_write, dm_write, is_jz, is_jnz, is_jl, is_jg, is_jump);
InstructionMemory IM(PC, instr);
RegisterFile RF(clk, reg_write, instr[10:9], instr[8:7], instr[10:9], write_data, read_data1, read_data2);
ALU ALU(read_data1, op2, alu_func, result, zero, sign, ovf);
DataMemory DM(clk, dm_write, read_data2, read_data1, dm_read_data);

//Logic
assign write_data = is_mem_access ? dm_read_data : (is_move ? read_data2 : result);
assign op2 = is_imm ? instr[8:1] : read_data2;

endmodule
