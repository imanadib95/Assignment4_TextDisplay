`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:28:38 09/17/2016
// Design Name:   ASCIItoPixelOnOff
// Module Name:   C:/Users/imana/Documents/SCHOOL/ECE3710/Assignment4_TextDisplay/ASCIItoPixelOnOff_Test.v
// Project Name:  Assignment4_TextDisplay
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ASCIItoPixelOnOff
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ASCIItoPixelOnOff_Test;

	// Inputs
	reg clk;
	reg [7:0] ASCII;
	reg [2:0] PixelCount;
	reg [2:0] LineCount;

	// Outputs
	wire PixelOnOff;

	// Instantiate the Unit Under Test (UUT)
	ASCIItoPixelOnOff uut (
		.clk(clk), 
		.ASCII(ASCII), 
		.PixelCount(PixelCount), 
		.LineCount(LineCount), 
		.PixelOnOff(PixelOnOff)
	);
	integer i=0;
	initial begin
		// Initialize Inputs
		clk = 0;
		ASCII = 8'b01000001;
		PixelCount = 0;
		LineCount = 0;

		// Wait 100 ns for global reset to finish
		for(i=0;i<64;i=i+1)
		begin
			{LineCount,PixelCount} = i;
			#4;
		end
		
		
        
		// Add stimulus here

	end
			always
			#1 clk <=~clk;
endmodule

