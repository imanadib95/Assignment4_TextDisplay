`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:33:04 09/16/2016
// Design Name:   ASCIItoGlyphWord
// Module Name:   C:/Users/imana/Documents/SCHOOL/ECE3710/Assignment4_TextDisplay/ASCIItoGlyphWord_Test.v
// Project Name:  Assignment4_TextDisplay
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ASCIItoGlyphWord
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ASCIItoGlyphWord_Test;

	// Inputs
	reg clk;
	reg [7:0] ASCII;
	reg [2:0] PixelCount;
	reg [2:0] LineCount;

	// Outputs
	wire [15:0] GlyphWord;

	// Instantiate the Unit Under Test (UUT)
	ASCIItoGlyphWord uut (
		.clk(clk), 
		.ASCII(ASCII), 
		.PixelCount(PixelCount), 
		.LineCount(LineCount), 
		.GlyphWord(GlyphWord)
	);
	integer i;
	integer j;
	initial begin
		// Initialize Inputs
		clk = 0;
		ASCII = 0;
		PixelCount = 0;
		LineCount = 0;

		// Wait 100 ns for global reset to finish
		#1;
        
		// Add stimulus here
		for(i =32; i <42; i= i+1)
		begin
			ASCII = i;
				for(j=0; j<4; j=j+1)
				begin
					LineCount[2:1] = j;
					#10;
				end
		end
	end
      always
		#1 clk <=~clk;
endmodule

