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


with open(assembly_input_file + ".txt") as file:
    for count, line in enumerate(file):
        content = line
        content2 = content.split()
        if content is not '\n':
            if content2[0].lower() == "reset": # reset is 0000
            # no arguments: all 16 bits are 0
                s += coe_form(str("{:0>16b}".format(int("0", 10))))

            elif content2[0].lower() == "load": # load is 0001
            # load reg data
            # next 4 bits are register, next 8 trash, next 16 are mem address
                s += '0001'
                if(int(content2[1],16) <= int('0xf', 16)):
                    s += coe_form(str("{:0>12b}".format(int(content2[1], 16))))
                else:
                    error_print(count, content2[1])
                    os.system('pause')
                    break
                #TODO Finish load three instruction (bank)

                if (int(content2[2], 16) <= int('0xff', 16)):
                    s += coe_form(str("{:0>12b}".format(int(content2[1], 16))))
                else:
                    error_print(count, content2[2])
                    os.system('pause')
                    break
                if(int(content2[3],16) <= int('0xffff', 16)):
                    s += coe_form(str("{:0>16b}".format(int(content2[3], 16))))
                else:
                    error_print(count, content2[3])
                    os.system('pause')
                    break

            # store is 0010 - 4 bits reg - 8 bits junk - 16 bits mem location
            elif content2[0].lower() == "store":
                s += '0010'
                if(int(content2[1], 16) <= int('0xfff', 16)):
                    s += str("{:0>12b}".format(int(content2[1],16)))
                else:
                    error_print(count, content2[1])
                    os.system('pause')
                    break
                #TODO Finish third bank instuction add

                if(int(content2[2], 16) <= int('0xffff', 16)):
                    s += coe_form(str("{:0>12}".format(int(content2[2], 16))))
                else:
                    error_print(count, content2[2])
                    os.system('pause')
                    break

            # advance is 0011
            elif content2[0].lower() == "advance":
                s += '0011'
                s += coe_form(str("{:0>12b}".format(int(content2[1],16))))

            # increment is 0100
            elif content2[0].lower() == "increment":
                s +=  '0100'
                s += coe_form("{:0>12b}".format(int(content2[1],16)))

            # pause is 0101
            elif content2[0].lower() == "pause":
                s += '0101'
                s += coe_form("{:0>12b}".format(int(content2[1],16)))

            # add is 0110 - 6 bits reg - 6 bits reg
            elif content2[0].lower() == "add":
                s += '0110'
                # argument 1 check
                if(int(content2[1], 16) <= int('0xff', 16)):
                    s += "{:0>6b}".format(int(content2[1],16))
                else:
                    error_print(count, content2[1])
                    os.system('pause')
                    break
                # argument 2 check
                if(int(content2[2], 16) <= int('0ff', 16)):
                    s += coe_form("{:0>6b}".format(int(content2[2], 16)))
                else:
                    error_print(count, content2[2])
                    os.system('pause')
                    break
        else:
            continue


output = open('output.coe', 'w+')
with output as file:
    file.write(s)
