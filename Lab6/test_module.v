`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:33:47 03/14/2016
// Design Name:   lab6module
// Module Name:   C:/Users/Ben/Documents/Xilinx/Lab6/test_module.v
// Project Name:  Lab6
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: lab6module
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg A;
	reg B;
	reg C;
	reg D;

	// Outputs
	wire W;
	wire X;
	wire Y;
	wire Z;

	// Instantiate the Unit Under Test (UUT)
	lab6module uut (
		.A(A), 
		.B(B), 
		.C(C), 
		.D(D), 
		.W(W), 
		.X(X), 
		.Y(Y), 
		.Z(Z)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		C = 0;
		D = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#50 A = 0;B = 0;C = 0;D = 1;
		#50 A = 0;B = 1;C = 1;D = 1;
		#50 A = 1;B = 1;C = 1;D = 0;
	end
	
	initial begin
	$monitor("W = %b, X = %b, Y = %b, Z = %b",W,X,Y,Z);
	end
      
endmodule
