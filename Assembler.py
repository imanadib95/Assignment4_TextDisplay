import os


assembly_input_file = input("Input name of text file (without extension): ")
s = ""
with open(assembly_input_file + ".txt") as file:
    content = file.readline();
    if "add " in content: # add is 00
        s += content + '\n'
    elif "sub " in content: # sub is 01
        s += content + '\n'

with open (output.coe) as file:
    file.write(content)