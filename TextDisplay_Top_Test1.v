`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:19:36 09/17/2016
// Design Name:   TextDisplay_Top
// Module Name:   C:/Users/imana/Documents/SCHOOL/ECE3710/Assignment4_TextDisplay/TextDisplay_Top_Test1.v
// Project Name:  Assignment4_TextDisplay
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: TextDisplay_Top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TextDisplay_Top_Test1;

	// Inputs
	reg clk;
	reg rst;

	// Outputs
	wire Hsync;
	wire Vsync;
	wire [7:0] ColorOut;

	// Instantiate the Unit Under Test (UUT)
	TextDisplay_Top uut (
		.clk(clk), 
		.rst(rst), 
		.Hsync(Hsync), 
		.Vsync(Vsync), 
		.ColorOut(ColorOut)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;

		// Wait 100 ns for global reset to finish
		#1;
		
		
        
		// Add stimulus here

	end
      
endmodule

