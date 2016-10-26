import os
##########################################################################
#     ASSEMBLER FOR FPGA CORE
#     Created by Ken Bonar
#
#     To test functions, run with input as "test".
#     See test.txt for the tested commands.

# helper function for COE formatting
def end_line(a):
    return a + ",\n"

# helper error printer
def error_print(x,y):
    print("input error, value at line: {} word: {}".format(x, y))


assembly_input_file = input("Input name of text file (without extension): ")
mem_radix = input("Input initialization memory radix:")
init_vector = input("Input initilization vector:")
s = ""

s += "memory_initialization_radix= {};\n".format(mem_radix)
s += "memory_initialization_vector={}\n".format(init_vector)


with open(assembly_input_file + ".txt") as file:
    for count, line in enumerate(file):
        content = line
        content2 = content.split()
        if content is not '\n':

            ########### add is 0000 - 4 bits dest - 4 bits source 1 - 4 bits source 2

            if content2[0].lower() == "add":
                s += '0000'
                # argument 1 check
                if (int(content2[1], 16) <= int('0xf', 16)):
                    s += "{:0>4b}".format(int(content2[1], 16))
                else:
                    error_print(count, content2[1])
                    os.system('pause')
                    break
                # argument 2 check
                if (int(content2[2], 16) <= int('0xf', 16)):
                    s += "{:0>4b}".format(int(content2[2], 16))
                else:
                    error_print(count, content2[2])
                    os.system('pause')
                    break
                if (int(content2[3], 16) <= int('0xf', 16)):
                    s += end_line("{:0>4b}".format(int(content2[3], 16)))
                else:
                    error_print(count, content2[3])
                    os.system('pause')
                    break

                ########### addi is 0001 - 4 bits dest - 4 bits source 1 - 4 bits source 2 (immediate)

            elif content2[0].lower() == "addi":
                s += "0001"
                # argument 1 check
                if (int(content2[1], 16) <= int('0xf', 16)):
                    s += "{:0>4b}".format(int(content2[1], 16))
                else:
                    error_print(count, content2[1])
                    os.system('pause')
                    break
                # argument 2 check
                if (int(content2[2], 16) <= int('0xf', 16)):
                    s += "{:0>4b}".format(int(content2[2], 16))
                else:
                    error_print(count, content2[2])
                    os.system('pause')
                    break
                if (int(content2[3], 16) <= int('0xf', 16)):
                    s += end_line("{:0>4b}".format(int(content2[3], 16)))
                else:
                    error_print(count, content2[3])
                    os.system('pause')
                    break

                ########### sub is 0010 - 4 bits dest - 4 bits source 1 - 4 bits source 2

            elif content[0].lower() == "sub":
                s += '0010'
                # argument 1 check
                if (int(content2[1], 16) <= int('0xf', 16)):
                    s += "{:0>4b}".format(int(content2[1], 16))
                else:
                    error_print(count, content2[1])
                    os.system('pause')
                    break
                # argument 2 check
                if (int(content2[2], 16) <= int('0xf', 16)):
                    s += "{:0>4b}".format(int(content2[2], 16))
                else:
                    error_print(count, content2[2])
                    os.system('pause')
                    break

                if (int(content2[3], 16) <= int('0xf', 16)):
                    s += end_line("{:0>4b}".format(int(content2[3], 16)))
                else:
                    error_print(count, content2[3])
                    os.system('pause')
                    break


                ########### load is 0011 - 4 bits dest - 4 bits source 1 - 4 bits source 2 (immediate)

            elif content2[0].lower() == "load":
                s += '0011'
                if(int(content2[1],16) <= int('0xf', 16)):
                    s += "{:0>4b}".format(int(content2[1], 16))
                else:
                    error_print(count, content2[1])
                    os.system('pause')
                    break

                if (int(content2[2], 16) <= int('0xff', 16)):
                    s += end_line("{:0>8b}".format(int(content2[2], 16)))
                else:
                    error_print(count, content2[2])
                    os.system('pause')
                    break

                if (int(content2[3],16) <= int('0xffff', 16)):
                    s += end_line(str("{:0>16b}".format(int(content2[3], 16))))
                else:
                    error_print(count, content2[3])
                    os.system('pause')
                    break

                ########### store is 0100 - 4 bits reg - 8 bits junk - 16 bits mem location

            elif content2[0].lower() == "store":
                s += '0100'
                if(int(content2[1], 16) <= int('0xf', 16)):
                    s += str("{:0>4b}".format(int(content2[1],16)))
                else:
                    error_print(count, content2[1])
                    os.system('pause')
                    break

                if (int(content2[2], 16) <= int('0xff', 16)):
                    s += end_line("{:0>8b}".format(int(content2[2], 16)))
                else:
                    error_print(count, content2[2])
                    os.system('pause')
                    break

                if(int(content2[3], 16) <= int('0xffff', 16)):
                    s += end_line(str("{:0>16}".format(int(content2[3], 16))))
                else:
                    error_print(count, content2[3])
                    os.system('pause')
                    break

                    ########### Set Equal is 0101 - 4 bits dest - 4 bits source - 4 bits source

            elif content2[0].lower() == "seq":
                s += '0101'
                if(int(content2[1], 16) <= int('0xf', 16)):
                    s += str("{:0>4b}".format(int(content2[1],16)))
                else:
                    error_print(count, content2[1])
                    os.system('pause')
                    break

                if (int(content2[2], 16) <= int('0xff', 16)):
                    s += end_line("{:0>8b}".format(int(content2[2], 16)))
                else:
                    error_print(count, content2[2])
                    os.system('pause')
                    break

                if(int(content2[3], 16) <= int('0xffff', 16)):
                    s += end_line(str("{:0>16}".format(int(content2[3], 16))))
                else:
                    error_print(count, content2[3])
                    os.system('pause')
                    break



        else:
            continue


output = open('output.coe', 'w+')
with output as file:
    file.write(s)
