`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:25:24 11/15/2016 
// Design Name: 
// Module Name:    Core_MemCont_VGA 
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
module Core_MemCont_VGA(up,down,left,right,ExternalClk,ColorOut,Hsync,Vsync, CA,CB,CC,CD,CE,CF,CG,DP,AN0, AN1, AN2, AN3,rstBtn,switches,JA, JD, JC);
	input up,down,left,right;
	input ExternalClk;
	output [7:0] ColorOut;
	output Hsync, Vsync;
	output CA,CB,CC,CD,CE,CF,CG,DP,AN0, AN1, AN2, AN3;
	input rstBtn;
	input [7:0] switches;
	input [7:4] JA; 
	input [7:4] JC;
	input [7:4] JD;
	// Internal Clock Buffers
	IBUFG g(.I(ExternalClk), .O(InternalClk));
	BUFG a(.I(InternalClk), .O(clk));
	
	// Wires
	wire [15:0]CoreDataOut,CoreWriteData,VGADataOut;
	wire [14:0] VGAAddress;
	wire [23:0] CoreAddress;
	wire [3:0] en_bus,ContBinOUT;
	// Wires for Knobs
	wire [15:0] xPixelPos, yPixelPos, colorPos;//**pixel output 
	wire [1:0] xDir, yDir, colorDir; 


	
	
	wire [15:0] UDcount,LRcount;
	// Instantiate modules
	CoreTop Core(clk,CoreDataOut, CoreAddress,CoreWriteData,CoreWE,R1Out,R2Out);
	
	
	// Kara, if you want to wire in the nobs, then go down to where xPixelPose, yPixelPos and colorPos
	// are commented out in the module below and switch them in for the inputs that are already in those
	//	lines. Just make sure theyre outputting properly and you should be good.
	MemCont Controller(clk, 
	CoreWE, 
	CoreWriteData,	
	CoreAddress, 
	VGAAddress, 
	{15'd0,rstBtn},
	xPixelPos, //LRcount,
	yPixelPos, //UDcount, //
	colorPos, //{8'b0,switches}, //
	CoreDataOut, 
	VGADataOut);
	
	VGA_Controller VGA(clk, VGADataOut[7:0],VGAAddress,Hsync,Vsync,ColorOut);
	
	// Counter Instantiations
	
	
	debounce upbtn(1'b0, clk, up, updb);
	
	debounce downbtn(1'b0, clk, down, downdb);
	
	buttonCount UDcounter(clk,updb,downdb,1'b0,UDcount);
	
	debounce rightbtn(1'b0, clk, right, rightdb);
	
	debounce leftbtn(1'b0, clk, left, leftdb);
	
	buttonCount LRcounter(clk,rightdb,leftdb,1'b0,LRcount);
	
	SevSegDisplay4DigController DisplayController(clk,1'b0,{xPixelPos[7:0],yPixelPos[7:0]},ContBinOUT,en_bus);
	
	BinaryTo4DigHex7SegDisplay	 DisplayConverter(en_bus, ContBinOUT,CA,CB,CC,CD,CE,CF,CG,DP,AN0, AN1, AN2, AN3);
	
	// Encoder business
	PmodEnc #(159) xEnc (clk, JA, xPixelPos[7:0]); 
	PmodEnc #(119) yEnc (clk, JC, yPixelPos[7:0]); 
	PmodEnc #(255) color(clk, JD, colorPos[7:0]);
	
	assign xPixelPos[15:8] = 8'd0;
	assign yPixelPos[15:8] = 8'd0;
	assign colorPos[15:8] = 8'd0;

endmodule
	