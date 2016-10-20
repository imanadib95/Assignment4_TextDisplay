`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:05:31 10/18/2016
// Design Name:   CoreAndRam
// Module Name:   C:/Users/imana/OneDrive/Documents/GitHub/Assignment4_TextDisplay/CoreAndRam_Test.v
// Project Name:  VGA_w_Dispatch2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: CoreAndRam
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module CoreAndRam_Test;

	// Inputs
	reg clk;

	// Instantiate the Unit Under Test (UUT)
	CoreAndRam uut (
		.clk(clk)
	);

	initial begin
		// Initialize Inputs
		clk = 0;

		// Wait 100 ns for global reset to finish
		#1;
        
		// Add stimulus here

	end
	
	always
	#2 clk<=~clk;
	
      
endmodule

