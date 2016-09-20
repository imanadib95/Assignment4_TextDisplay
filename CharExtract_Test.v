`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:27:56 09/17/2016
// Design Name:   CharExtract
// Module Name:   C:/Users/imana/Documents/SCHOOL/ECE3710/Assignment4_TextDisplay/CharExtract_Test.v
// Project Name:  Assignment4_TextDisplay
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: CharExtract
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module CharExtract_Test;

	// Inputs
	reg clk;
	reg [6:0] HorzPos;
	reg [6:0] LineCount;

	// Outputs
	wire [7:0] ASCII;
	wire [7:0] TextColor;

	// Instantiate the Unit Under Test (UUT)
	CharExtract uut (
		.clk(clk), 
		.HorzPos(HorzPos), 
		.LineCount(LineCount), 
		.ASCII(ASCII), 
		.TextColor(TextColor)
	);
integer i;
	initial begin
		// Initialize Inputs
		clk = 0;
		HorzPos = 0;
		LineCount = 0;

		// Wait 100 ns for global reset to finish
		for (i=0;i<1028;i=i+1)
		begin
			{LineCount,HorzPos} = i;
			#2;
		end
        
		// Add stimulus here

	end
      always 
		#1 clk<=~clk;
endmodule

