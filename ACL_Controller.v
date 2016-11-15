`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:50:07 11/15/2016 
// Design Name: 
// Module Name:    ACL_Controller 
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
module ACL_Controller(
    input clk,
	 input hasBeenRead,
	 input [9:0]aclIn,
	 output reg[15:0]aclOut,
	 output led
	 );

	 reg PS, NS;
	 parameter receive = 1'b0, send = 1'b1;
	 
	 initial aclOut = 16'b0;
	 initial PS = receive;
	 
	 always@(posedge clk) begin
		PS <= NS;	
	 end
	 
	 assign led = aclOut[0] & 1'b1;
	 
	 always@(*) begin
		case(PS)
			//receive singal from accelerameter
			receive: begin
				if(aclIn > 9'b000010000) begin //above threshold
					aclOut = 16'b1;
					NS = send;
				end
				else begin
					aclOut = 16'b0;
					NS = receive;
				end
			end
			
			send: begin
				if(hasBeenRead) begin
					aclOut = 16'b0;
					NS = receive;
				end
				else begin
					aclOut = 16'b1;
					NS = send;
				end
			end
			
			default: begin
				NS = receive;
				aclOut = 16'b0;
			end
		
		endcase
	 end

	

endmodule
