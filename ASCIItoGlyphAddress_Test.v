`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:33:29 09/16/2016
// Design Name:   ASCIItoGlyphAddress
// Module Name:   C:/Users/imana/Documents/SCHOOL/ECE3710/Assignment4_TextDisplay/ASCIItoGlyphAddress_Test.v
// Project Name:  Assignment4_TextDisplay
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ASCIItoGlyphAddress
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ASCIItoGlyphAddress_Test;

	// Inputs
	reg [7:0] ASCII;
	reg [2:0] PixelCount;
	reg [2:0] LineCount;

	// Outputs
	wire [12:0] GlyphTableAddress;

	// Instantiate the Unit Under Test (UUT)
	ASCIItoGlyphAddress uut (
		.ASCII(ASCII), 
		.PixelCount(PixelCount), 
		.LineCount(LineCount), 
		.GlyphTableAddress(GlyphTableAddress)
	);

	integer i;
	integer j;
	initial begin
		// Initialize Inputs
		ASCII = 0;
		PixelCount = 0;
		LineCount = 0; 

		// Wait 100 ns for global reset to finish
		#100;
		for(i=32;i<96;i=i+1)
		begin
			ASCII=i;
			for(j=0;j<4;j=j+1)
			begin
				LineCount[2:1] = j;
				#4;
			end
		end
        
		// Add stimulus here

	end
      
endmodule

