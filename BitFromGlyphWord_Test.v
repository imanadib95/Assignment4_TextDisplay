`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:11:48 09/16/2016
// Design Name:   BitFromGlyphWord
// Module Name:   C:/Users/imana/Documents/SCHOOL/ECE3710/Assignment4_TextDisplay/BitFromGlyphWord_Test.v
// Project Name:  Assignment4_TextDisplay
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: BitFromGlyphWord
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module BitFromGlyphWord_Test;

	// Inputs
	reg [15:0] GlyphWord;
	reg LineCountLSB;
	reg [2:0] PixelCount;

	// Outputs
	wire PixelOnOff;

	// Instantiate the Unit Under Test (UUT)
	BitFromGlyphWord uut (
		.GlyphWord(GlyphWord), 
		.LineCountLSB(LineCountLSB), 
		.PixelCount(PixelCount), 
		.PixelOnOff(PixelOnOff)
	);
integer i;
	initial begin
		// Initialize Inputs
		GlyphWord = 0;
		LineCountLSB = 0;
		PixelCount = 0;

		// Wait 100 ns for global reset to finish
		#100;
		GlyphWord = 16'b1000100110111111;
		for(i=0;i<16;i=i+1)
		begin
			{LineCountLSB,PixelCount} = i;
			#4;
		end
        
		// Add stimulus here

	end
      
endmodule

