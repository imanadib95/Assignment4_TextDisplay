import os

# helper function for COE formatting
def coe_form(a):
    return a + ",\n"

def error_print(x,y):
    print("input error, value at line: {} word: {}".format(x, y))


assembly_input_file = input("Input name of text file (without extension): ")
mem_radix = input("Input initialization memory radix:")
init_vector = input("Input initilization vector:")
s = ""

s += "memory_initialization_radix= {};\n".format(mem_radix)
s += "memory_initialization_vector={}\n".format(init_vector)
 #TODO add COE header
 #memset or something


with open(assembly_input_file + ".txt") as file:
    for count, line in enumerate(file):
        content = line
        content2 = content.split()


        if content2[0].lower() == "reset": # reset is 0000
        # no arguments: all 16 bits are 0
            s += '0000'
            s += str("{:0>14b}".format(int(content2[1],16)))

        elif content2[0].lower() == "load": # load is 0001
        # load reg data
        # next 4 bits are register, next 8 trash, next 16 are mem address
            s += '0001'
            if(int(content2[1],16) <= int('0xfff', 16)):
                s += coe_form(str("{:0>12b}".format(int(content2[1], 16))))
            else:
                error_print(count, content2[1])
                break
            if(int(content2[2],16) <= int('0xffff', 16)):
                s += coe_form(str("{:0>16b}".format(int(content2[2], 16))))
            else:
                error_print(count, content2[2])
                break

        # store is 0010 - 4 bits reg - 8 bits junk - 16 bits mem location
        elif content2[0].lower() == "store":
            s += '0010'
            if(int(content2[1], 16) <= int('0xfff', 16)):
                s += coe_form(str("{:0>12b}".format(int(content2[1],16))))
            else:
                error_print(count, content2[1])
            if(int(content2[2], 16) <= int('oxffff', 16)):
                s += coe_form(str("{:0>16}".format(int(content2[2], 16))))
            else:
                error_print(count, content2[2])

        # advance is 0011
        elif content2[0].lower() == "advance":
            s += '0011'
            s += str("{:0>16b}".format(int(content2[1],16)))

        # increment is 0100
        elif content2[0].lower() == "increment":
            s +=  '0100'
            s += str("{:0>16b}".format(int(content2[1],16)))

        # pause is 0101
        elif content2[0].lower() == "pause":
            s += '0101'
            s += str("{:0>16b}".format(int(content2[1],16)))

        # add is 0110 - 4 bits reg - 4 bits reg
        elif content2[0].lower() == "add":
            s += '0110'
            if(int(content2[1]) <= int('0xff')):
                s += str(int(content2[1],16))
            else:
                error_print(count, content2[1])
            s += str(int(content2[2],16))
            s += '0000'



output = open('output.coe', 'w+')
with output as file:
    file.write(s)
