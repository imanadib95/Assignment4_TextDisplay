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
module Top(
	input extClk, 
	input rst, 
	input aclReset,
	input [7:4] JA, 
	input [7:4] JC,
	input [7:4] JD, 


	//input [1:0] sw,
	//input sdi,				
	output [7:0] ColorOut,
	output Hsync,
	output Vsync
	//output [7:0]led
	//output sdo,
	//output sclk,
	//output ss
	);

	wire [1:0] SubPixelCount;
	wire [9:0] PixelCount;
	wire [2:1] LineCount;
	wire [15:0] TextAreaAddress;
	wire [15:0] ASCIIColChar;
	wire [15:0] GlyphWord;
	wire [15:0] readDataB;
	wire [15:0] writeDataB;
	wire writeEnableB;
	wire [15:0] addressB;
	wire [15:0] xPixelPos, yPixelPos, colorPos;
	wire [9:0] aclMag;					
	wire [1:0] xDir, yDir, colorDir; 
	wire [1:0] x;
	wire [1:0] y; 
	wire aclRead; //**use this to flag when acl signal has been read
	wire [15:0]aclOut; //**acl signal
	wire ledHolder;
	
	IBUFG buf1(.I(extClk),.O(intClk));
	BUFG buf2(.I(intClk),.O(clk));

	VGA_Controller Cont(clk, rst, ASCIIColChar,GlyphWord,SubPixelCount,LineCount,TextAreaAddress,ColorOut,Hsync,Vsync);

	DispatchAndRam DAR(clk, TextAreaAddress, SubPixelCount,LineCount[2:1], ASCIIColChar,GlyphWord,
							 readDataB, writeDataB, writeEnableB, addressB);
						 	 
							 
	CoreI c(clk, readDataB, addressB, writeDataB, writeEnableB);
	//Core c(clk, readDataB, writeDataB, writeEnableB, addressb);
	
	PmodEnc #(160) xEnc (clk, JA, xPixelPos[7:0]); 
	PmodEnc #(120) yEnc (clk, JC, yPixelPos[7:0]); 
	PmodEnc #(63) color(clk, JD, colorPos[9:2]); 
	

endmodule
