`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:52:32 11/03/2016 
// Design Name: 
// Module Name:    Core_RAM_VGA 
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
module Core_RAM_VGA(ExternalClk,ColorOut,Hsync,Vsync);
	input ExternalClk;
	output [7:0] ColorOut;
	output Hsync, Vsync;
	
	
	wire [15:0] ReadDataA, WriteDataA, ReadDataB, WriteDataB;
	wire WriteEnableA,WriteEnableB;
	wire [23:0] AddressA;
	wire [14:0] AddressB;
	wire [15:0] R1Out,R2Out;
	// Internal Clock Buffers
	IBUFG g(.I(ExternalClk), .O(InternalClk));
	BUFG a(.I(InternalClk), .O(clk));
	
	// Core Instantiation
	CoreTop Core(clk,ReadDataA, AddressA,WriteDataA,WriteEnableA,R1Out,R2Out);
	
	// RAM Instantiation
	RAM Ram(
  .clka(clk), // input clka
  .wea(WriteEnableA), // input [0 : 0] wea
  .addra(AddressA[14:0]), // input [14 : 0] addra
  .dina(WriteDataA), // input [15 : 0] dina
  .douta(ReadDataA), // output [15 : 0] douta
  .clkb(clk), // input clkb
  .web(1'b0), // input [0 : 0] web
  .addrb(AddressB), // input [14 : 0] addrb
  .dinb(16'd0), // input [15 : 0] dinb
  .doutb(ReadDataB) // output [15 : 0] doutb
);

	// VGA Controller Instantiation
	VGA_Controller VGA(clk, ReadDataB[7:0],AddressB,Hsync,Vsync,ColorOut);

endmodule
