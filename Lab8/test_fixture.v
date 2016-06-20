`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:24:11 04/05/2016
// Design Name:   top_module
// Module Name:   C:/Users/Ben/Documents/Xilinx/Lab8/test_fixture.v
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

module test_fixture;

	// Inputs
	reg dI;
	reg dS;

	// Outputs
	wire Zout;

	// Instantiate the Unit Under Test (UUT)
	top_module uut (
		.dI(dI), 
		.dS(dS), 
		.Zout(Zout)
	);
	reg t_clock;
	initial begin
		// Initialize Inputs
		dI = 1;
		dS = 1;
		t_clock = 0; forever #5 t_clock = ~t_clock;

		// Wait 100 ns for global reset to finish
		#100;
        
		#50 dI = 0; 
		#50 dI = 1; 
		#50 dI = 0; 
		#50 dI = 1; 
		#50 dI = 0; 
		#50 dI = 1; 
		#50 dI = 1; 
		#50 dS = 0; 
		  
		// Add stimulus here

	end
      
endmodule

