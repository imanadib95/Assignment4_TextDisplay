`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:49:48 10/14/2016 
// Design Name: 
// Module Name:    Top 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Top(input extClk, input rst, output [7:0] ColorOut,output Hsync,output Vsync);

	wire [1:0] SubPixelCount;
	wire [9:0] PixelCount;
	wire [9:0] LineCount;
	wire [15:0] TextAreaAddress;
	wire [15:0] ASCIIColChar;
	wire [15:0] GlyphWord;
	
	IBUFG buf1(.I(extClk),.O(intClk));
	BUFG buf2(.I(intClk),.O(clk));

	VGA_Controller Cont(clk, rst, ASCIIColChar,GlyphWord,SubPixelCount,PixelCount,LineCount,TextAreaAddress,ColorOut,Hsync,Vsync);

	DispatchAndRam DAR(clk, TextAreaAddress, SubPixelCount,PixelCount,LineCount, ASCIIColChar,GlyphWord);

endmodule
