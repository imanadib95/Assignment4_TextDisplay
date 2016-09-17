`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:40:40 09/17/2016 
// Design Name: 
// Module Name:    CharacterPosToASCIIAddress 
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
module CharacterPosToASCIIAddress(
    input [6:0] HorzPos,
    input [6:0] LineCount,
    output [12:0] TextAreaAddress
    );
	 
	 assign TextAreaAddress = {LineCount[5:0],HorzPos};


endmodule
