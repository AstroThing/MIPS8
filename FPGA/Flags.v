`timescale 1ns / 1ps

module Flags(
    input flags_write,
	 input zero,
	 input sign,
	 input ovf,
	 output zf,
	 output sf,
	 output of
    );
	 
	 reg [2:0] flags;
	 assign zf = flags[0];
	 assign sf = flags[1];
	 assign of = flags[2];
	 
	 always @ (flags_write or zero or sign or ovf)
	 begin
		flags = flags;
		if(flags_write)
		begin
			flags[0] = zero;
			flags[1] = sign;
			flags[2] = ovf;
		end
	end

endmodule
