`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:46:36 10/14/2016 
// Design Name: 
// Module Name:    DispatchAndRam 
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
module DispatchAndRam(clk, TextAreaAddress, SubPixelCount,LineCount, ASCIIColChar,GlyphWord,
								readDataB, writeDataB, writeEnableB, addressB);
	input clk;
	input [15:0] TextAreaAddress;
	input [1:0]	SubPixelCount;
//	input [9:0] PixelCount;
	input [2:1]	LineCount;
	output [15:0] ASCIIColChar;
	output [15:0] GlyphWord;
	
	// IO for interacting with core
	output [15:0] readDataB;
	input [15:0]writeDataB;
	input writeEnableB;
	input [15:0]addressB;
	
	wire [15:0] AddressA;
	wire [15:0] doutA;
	
	VGA_Dispatch Dispatch(
	clk,
	TextAreaAddress[15:0], 
//	GlyphAreaAddress[15:0],
	SubPixelCount[1:0],
//	PixelCount[9:0],
	LineCount[2:1],
	doutA[15:0],
   ASCIIColChar[15:0],
   GlyphWord[15:0],
	AddressA[15:0]
	);
	
	ram R (
  .clka(clk), // input clka
  .wea(1'b0), // input [0 : 0] wea
  .addra(AddressA[14:0]), // input [13 : 0] addra
  .dina(16'd0), // input [15 : 0] dina
  .douta(doutA), // output [15 : 0] douta
  .clkb(clk), // input clkb
  .web(writeEnableB), // input [0 : 0] web
  .addrb(addressB[14:0]), // input [13 : 0] addrb
  .dinb(writeDataB), // input [15 : 0] dinb
  .doutb(readDataB) // output [15 : 0] doutb
);

/*	ram R (
  .clka(clk), // input clka
  .wea(1'b0), // input [0 : 0] wea
  .addra(AddressA[14:0]), // input [14 : 0] addra
  .dina(16'd0), // input [15 : 0] dina
  .douta(doutA), // output [15 : 0] douta
  .clkb(clk), // input clkb
  .web(1'b0), // input [0 : 0] web
  .addrb(15'd0), // input [14 : 0] addrb
  .dinb(16'd0), // input [15 : 0] dinb
  .doutb() // output [15 : 0] doutb
);*/

   

endmodule
