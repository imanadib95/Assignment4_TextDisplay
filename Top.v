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
	input [7:4] JA, 
	input [7:4] JC, 
	input [1:0] sw,
	input sdi,				
	output [7:0] ColorOut,
	output Hsync,
	output Vsync,
	output led,
	output sdo,
	output sclk,
	output ss
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
	wire [15:0] xPixelPos, yPixelPos; //Position of curser
	wire [9:0] aclMag;							//magnitude of acceleration in x direction
	wire [1:0] xDir, yDir; 				//Direction of pixel movement
	wire [1:0] x;
	wire [1:0] y; 
	wire aclRead;
	wire [15:0]aclOut; 
	
	IBUFG buf1(.I(extClk),.O(intClk));
	BUFG buf2(.I(intClk),.O(clk));

	VGA_Controller Cont(clk, rst, ASCIIColChar,GlyphWord,SubPixelCount,LineCount,TextAreaAddress,ColorOut,Hsync,Vsync);

	DispatchAndRam DAR(clk, TextAreaAddress, SubPixelCount,LineCount[2:1], ASCIIColChar,GlyphWord,
							 readDataB, writeDataB, writeEnableB, addressB);
						 	 
							 
	CoreI c(clk, readDataB, addressB, writeDataB, writeEnableB);
	//Core c(clk, readDataB, writeDataB, writeEnableB, addressb);
	
	PmodEnc xEnc(clk, JA, xDir); // dir: 00 = idle, 01 = right, 10 = left
	PmodEnc yEnc(clk, JC, yDir); // dir: 00 = idle, 01 = right, 10 = left
	
	EncCounter #(160) xPos(clk, xDir, xPixelPos);
	EncCounter #(120) yPos(clk, yDir, yPixelPos);
	
	//color encoder - 16 digits 
	//8 color, 8 bits of 0's
	//16 bit output, either 0 or 1. //input hasBeenRead
	
	
	ACL _ACL(clk, rst, sw, sdi, sdo, sclk, ss, aclMag);
	ACL_Controller aclCon(clk, aclRead, aclMag, aclOut, led);
	
	
endmodule
