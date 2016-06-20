`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:43:36 04/05/2016 
// Design Name: 
// Module Name:    Clock_down_converter 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Clock_down_converter(
    input clock, // 50 MHz clock, built in function
    input clear, // Reset down-converter
    output clk1, // ~0.5 Hz clock
    output clk500 // 500 Hz clock
    );
	 
 // To get 25MHz (for example),use a jumper to connect
 // the 25MHz contact hole to the middle contact hole
 // clock pin assignment is "B8" (cite user manual)
 // 27-bit counter
 reg[26:0] q;
 always @ (posedge clock, posedge clear) begin
	 if (clear)
		q <= 0;
	 else
		q <= q+1;
 end
 
 // Uncomment and comment following statements as needed for
 // simulation and synthesis
  //assign clk0 = q[0]; //40 ns period (for simulation)
  //assign clk1 = q[1]; //80 ns period (for simulation)
 assign clk500 = q[15];//500 Hz(for debouncer and 7-seg
 // display)
 assign clk1 = q[26]; //~0.5 Hz (for the sequential ckt)

endmodule
