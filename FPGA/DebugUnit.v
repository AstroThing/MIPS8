`timescale 1ns / 1ps

module DebugUnit(
	 input clk,
	 input start,
	 input [4:0] opcode,
	 output pc_enabled,
	 output stopped
    );
	 
	 reg stop = 1;
	 
	 assign pc_enabled = !stop;
	 assign stopped = stop;
	 
	 always @ (posedge clk)
	 begin
		if(start)
			stop = 0;
	 
		if(opcode == 5'b11111)
			stop = 1;
	 end
endmodule
