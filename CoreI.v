`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:39:56 10/18/2016 
// Design Name: 
// Module Name:    CoreI 
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
module CoreI(clk, ReadData, Address, WriteData, WriteEnable
    );
	 input clk;
	 input [15:0] ReadData;
	 output reg [15:0] Address;
	 output reg [15:0] WriteData;
	 output reg WriteEnable;
	 
	 reg [15:0] PC, NextPC;
	 reg [15:0] MemAddress, NextMemAddress;
	 reg [15:0] Data, NextData;
	 reg [15:0] Count, NextCount; // Register to hold count over pause instruction
	 
	 reg [2:0] PS, NS;
	 
	 
	 initial PC = 16'd0;
	 initial MemAddress = 16'd914;
	 initial Data = 16'd0;
	 initial Count = 16'd0;
	 
	 parameter [3:0] Fetch =0,
	 Receive = 1,
	 Reset = 2,
	 Load = 3,
	 Store = 4,
	 Advance = 5,
	 Increment = 6,
    Pause = 7;
						  
	 // Latching values into registers
	 always @(posedge clk)
	 begin
		PS <= NS;
		PC<=NextPC;
		MemAddress<=NextMemAddress;
		Data<=NextData;
		Count<=NextCount;		
	 end
	 
	 // Next State Assignments
	 always @(*)
	 begin
		case(PS)
			Fetch: 
			begin
				NS <= Receive; // Next State
				NextPC <= PC;
				NextMemAddress<=MemAddress;
				NextData<=Data;
				NextCount<=Count;
			end
			Receive:
			begin
				case(ReadData[2:0]) // Check incoming instruction for which state to enter next
					0: 
					begin
						NS <=Reset;
					end
					1: 
					begin
						NS <=Load;
					end
					2:
					begin
						NS <=Store;
					end
					3:
					begin
						NS <=Advance;
					end
					4:
					begin
						NS <=Increment;
					end
					5:
					begin
						NS <=Pause;
					end
					default:
					begin
						NS <=Reset;
					end
				endcase			
			NextPC <= PC+1'b1; // Set PC for next instruction			
			NextMemAddress<=MemAddress;
			NextData<=Data;
			NextCount<=Count;
			end
			
			Reset:
			begin
				NS <=Fetch;
				NextPC <= 16'b0;
				NextMemAddress<=MemAddress;
				NextData<=Data;
				NextCount<=Count;
			end
			Load:
			begin
				NS <=Fetch;
				NextData<=ReadData;
				NextPC<=PC;
				NextMemAddress<=MemAddress;
				NextCount<=Count;
			end
			Store:
			begin
				NS <=Fetch;
				NextPC<=PC;
				NextMemAddress<=MemAddress;
				NextData<=Data;
				NextCount<=Count;
			end
			Advance:
			begin
				NS <=Fetch;
				NextPC<=PC;
				NextMemAddress <=MemAddress+1'b1;
				NextData<=Data;
				NextCount<=Count;
			end
			Increment:
			begin				
				NS <=Fetch;
				NextPC<=PC;
				NextMemAddress <=MemAddress;
				NextData<=Data+16'b00000011_00000001;
				NextCount<=Count;
			end
			Pause:
			begin
				NextPC<=PC;
				NextMemAddress <=MemAddress;
				NextData<=Data;
				NextCount<=Count+1'b1;
				if(Count == 16'b0000_0000_0000_0001)
					NS <=Fetch;
				else
					NS<=Pause;
			end
			default:
			begin
				NS <=Fetch;
				NextPC<=PC;
				NextMemAddress <=MemAddress;
				NextData<=Data;
				NextCount<=Count;
			end
		endcase
		if(MemAddress==16'd8000)
			NextMemAddress<=16'd895;
	 end
	 
	 // Combinational Output Logic
	always @(*)
	begin
		case(PS)
		Fetch:
		begin
			Address = PC;
			WriteData = 16'bx;
			WriteEnable = 1'b0;
		end
		Receive:
			case(NS)
				Load:
				begin
					Address = MemAddress;
					WriteData = 16'bx;
					WriteEnable = 1'b0;
				end
				Store:
				begin
					Address = MemAddress;
					WriteData = Data;
					WriteEnable = 1'b1;
				end
				default:
				begin
					Address = PC;
					WriteData = 16'bx;
					WriteEnable = 1'b0;
				end
			endcase
			default:
			begin
				Address = PC;
				WriteData = 16'bx;
				WriteEnable = 1'b0;
			end
		endcase
	end
endmodule
