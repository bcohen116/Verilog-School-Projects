`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:41:41 04/18/2016
// Design Name:   shiftR
// Module Name:   C:/Users/Ben/Documents/Xilinx/Lab8/testRegister.v
// Project Name:  Lab8
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: shiftR
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testRegister;

	// Inputs
	reg clk1;
	reg dI;
	reg dS;

	// Outputs
	wire [7:0] bin;

	// Instantiate the Unit Under Test (UUT)
	shiftR uut (
		.clk1(clk1), 
		.dI(dI), 
		.dS(dS), 
		.bin(bin)
	);

	initial fork
		// Initialize Inputs
		dI = 1;
		dS = 1;
		clk1 = 0; forever #5 clk1 = ~clk1; 

		// Wait 100 ns for global reset to finish
		#100;
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

