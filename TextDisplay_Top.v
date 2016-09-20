`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:30:57 09/16/2016 
// Design Name: 
// Module Name:    TextDisplay_Top 
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
module TextDisplay_Top(input clk, 
 							  input rst, 
							  output Hsync, 
							  output Vsync, 
							  output [7:0] ColorOut);
		
		wire [9:0] PixelCount, LineCount;
		wire PixelOnOff;
		wire [7:0] ASCII;
		wire [7:0] TextColor;

		CharExtract _CharExtract(clk,
		 PixelCount[9:3],
		 LineCount[8:3],
		 ASCII, 
	    TextColor);

		ASCIItoPixelOnOff k(clk,ASCII,PixelCount[2:0],LineCount[2:0],PixelOnOff);
	
	   VGA_SignalGen h(clk, rst,{TextColor&{8{PixelOnOff}}}, PixelCount, LineCount, Hsync,Vsync, ColorOut);

endmodule
