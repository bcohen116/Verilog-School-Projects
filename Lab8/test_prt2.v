`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:33:01 04/18/2016
// Design Name:   top_module
// Module Name:   C:/Users/Ben/Documents/Xilinx/Lab8/test_prt2.v
// Project Name:  Lab8
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: top_module
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_prt2;

	// Inputs
	reg clock;
	reg dI;
	reg dS;
	reg clear;

	// Outputs
	wire [6:0] seg;
	wire Zout;
	wire clk1;
	wire [3:0] an;

	// Instantiate the Unit Under Test (UUT)
	top_module uut (
		.clock(clock), 
		.dI(dI), 
		.dS(dS), 
		.clear(clear), 
		.seg(seg), 
		.Zout(Zout), 
		.clk1(clk1), 
		.an(an)
	);

	initial fork
		// Initialize Inputs
		dI = 1;
		dS = 1;
		clear = 0;
		clock = 0; forever #5 clock = ~clock; 

		// Wait 100 ns for global reset to finish
		#100;
      #10 clear = 1; 
		#20 clear = 0; 
		#45 dI = 0; 
		#85 dI = 1; 
		#125 dI = 0; 
		#165 dI = 1; 
		#205 dI = 0; 
		#245 dI = 1; 
		#285 dI = 1; 
		#285 dS = 0; 
        
		// Add stimulus here

join
      
endmodule

