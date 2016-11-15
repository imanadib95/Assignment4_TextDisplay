`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:29:51 11/15/2016 
// Design Name: 
// Module Name:    ColorEncoder 
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
module ColorEnc(
   input clk,
	input [1:0] move,
	output reg [15:0] color
	 );
	
	//initialize cursor 
	initial color = 16'b0;
	
	always @ (posedge clk) begin
		case(move)
			2'b00: pixel <= pixel;
			
			2'b10: begin
				if(pixel < max)
					pixel <= pixel + 1'b1;
			end
			
			2'b01: begin
				if(pixel > 0)
					pixel <= pixel - 1'b1;
			end
			
			default: pixel <= pixel;
		endcase
	end
endmodule