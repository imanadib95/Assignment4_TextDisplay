import os


assembly_input_file = input("Input name of text file (without extension): ")
s = ""
with open(assembly_input_file + ".txt") as file:
    content = file.readline();
    if "add " in content: # add is 00
        s += content
    elif "sub " in content: # sub is 01
        s += content

output = open('output.coe', 'w+')
with open (output) as file:
    file.write(content)