`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:27:08 03/06/2016
// Design Name:   sevenInputCircuit
// Module Name:   C:/Users/Ben/Documents/Xilinx/Lab5/TestModule.v
// Project Name:  Lab5
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: sevenInputCircuit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TestModule;

	// Inputs
	reg A;
	reg B;
	reg C;
	reg D;
	reg E;
	reg F;
	reg G;

	// Outputs
	wire X;
	wire Y;
	wire Z;

	// Instantiate the Unit Under Test (UUT)
	sevenInputCircuit uut (
		.A(A), 
		.B(B), 
		.C(C), 
		.D(D), 
		.E(E), 
		.F(F), 
		.G(G), 
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
		E = 0;
		F = 0;
		G = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		/*#50 A = 1'b0;B = 1'b0;C = 1'b0;D = 1'b0;E = 1'b0;F = 1'b0;G = 1'b0;
		#50 A = 1'b0;B = 1'b0;C = 1'b0;D = 1'b0;E = 1'b0;F = 1'b0;G = 1'b1;
		#50 A = 1'b0;B = 1'b0;C = 1'b0;D = 1'b1;E = 1'b0;F = 1'b1;G = 1'b1;
		#50 A = 1'b0;B = 1'b0;C = 1'b0;D = 1'b1;E = 1'b1;F = 1'b0;G = 1'b0;
		#50 A = 1'b0;B = 1'b0;C = 1'b1;D = 1'b1;E = 1'b0;F = 1'b0;G = 1'b1;
		#50 A = 1'b0;B = 1'b1;C = 1'b0;D = 1'b0;E = 1'b0;F = 1'b0;G = 1'b0;
		#50 A = 1'b1;B = 1'b0;C = 1'b0;D = 1'b0;E = 1'b0;F = 1'b0;G = 1'b0;
		#50 A = 1'b1;B = 1'b1;C = 1'b1;D = 1'b1;E = 1'b1;F = 1'b1;G = 1'b1;*/
		
		#50 A = 0;B = 0;C = 0;D = 0;E = 0;F = 0;G = 0;
		#50 A = 0;B = 0;C = 0;D = 0;E = 0;F = 0;G = 1;
		#50 A = 0;B = 0;C = 0;D = 1;E = 0;F = 1;G = 1;
		#50 A = 0;B = 0;C = 0;D = 1;E = 1;F = 0;G = 0;
		#50 A = 0;B = 0;C = 1;D = 1;E = 0;F = 0;G = 1;
		#50 A = 0;B = 1;C = 0;D = 0;E = 0;F = 0;G = 0;
		#50 A = 1;B = 0;C = 0;D = 0;E = 0;F = 0;G = 0;
		#50 A = 1;B = 1;C = 1;D = 1;E = 1;F = 1;G = 1;

	end
      
endmodule

