`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:11:53 11/10/2016 
// Design Name: 
// Module Name:    ACL 
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
module ACL(
		CLK,
		RST,
		SW,
		SDI,
		SDO,
		SCLK,
		SS, 
		selData
);

// ====================================================================================
// 										Port Declarations
// ====================================================================================
   input        CLK;
   input        RST;
   input [1:0]  SW;
   input        SDI;
   output       SDO;
   output       SCLK;
   output       SS;
   output[9:0]  selData;
// ====================================================================================
// 								Parameters, Register, and Wires
// ====================================================================================
   
   wire [9:0]   xAxis;		// x-axis data from PmodACL
   wire [9:0]   yAxis;		// y-axis data from PmodACL
   wire [9:0]   zAxis;		// z-axis data from PmodACL
   
  // wire [9:0]   selData;	// Data selected to display
   
   wire         START;		// Data Transfer Request Signal
   
//  ===================================================================================
// 							  				Implementation
//  ===================================================================================
   
		//-----------------------------------------------
		//	Select Display Data and Convert to Magnitude
		//-----------------------------------------------
		sel_Data SDATA(
					.CLK(CLK),
					.RST(RST),
					.SW(SW),
					.xAxis(xAxis),
					.yAxis(yAxis),
					.zAxis(zAxis),
					.DOUT(selData)
		);
		
		//-----------------------------------------------
		//		 			 Interfaces PmodACL
		//-----------------------------------------------
		SPIcomponent SPI(
					.CLK(CLK),
					.RST(RST),
					.START(START),
					.SDI(SDI),
					.SDO(SDO),
					.SCLK(SCLK),
					.SS(SS),
					.xAxis(xAxis),
					.yAxis(yAxis),
					.zAxis(zAxis)
		);
		
		//-----------------------------------------------
		//	 Generates a 5Hz Data Transfer Request Signal
		//-----------------------------------------------
		ClkDiv_5Hz genStart(
					.CLK(CLK),
					.RST(RST),
					.CLKOUT(START)
		);
   
endmodule

