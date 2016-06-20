`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:50:04 03/14/2016
// Design Name:   hex7seg
// Module Name:   C:/Users/Ben/Documents/Xilinx/Lab6/hexTest.v
// Project Name:  Lab6
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: hex7seg
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module hexTest;

	// Inputs
	reg [3:0] x;

	// Outputs
	wire [6:0] a_to_g;

	// Instantiate the Unit Under Test (UUT)
	hex7seg uut (
		.x(x), 
		.a_to_g(a_to_g)
	);

	initial begin
		// Initialize Inputs
		x = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

