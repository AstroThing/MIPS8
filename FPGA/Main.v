`timescale 1ns / 1ps

module Main(
    input clk,
	 input start,
	 input is_dm_access,
	 input [3:0] read_addr,
	 output stopped,
	 output stopped_led,
	 output reg [7:0] read_data
    );
	
	wire [1:0] debug_rf_addr = read_addr[1:0];
	wire [3:0] debug_dm_addr = read_addr;
	wire [7:0] debug_rf_data;
	wire [7:0] debug_dm_data;
	
	wire stopped_wire;
	
	assign stopped = stopped_wire;
	assign stopped_led = stopped_wire;
	
	CPU cpu(clk, debug_rf_addr, debug_dm_addr, start, stopped_wire, debug_rf_data, debug_dm_data);
	
	always @ (is_dm_access or read_addr or debug_dm_data or debug_rf_data)
	begin
		read_data = is_dm_access ? debug_dm_data : debug_rf_data;
	end
endmodule
