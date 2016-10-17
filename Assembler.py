import os


assembly_input_file = input("Input name of text file (without extension): ")
s = ""
with open(assembly_input_file + ".txt") as file:
    for line in file:
        content = line
        content2 = content.split()
#TODO Double check bits!!!!  (first 4)
        if content2[0].lower() == "reset": # reset is 0000
        # no arguments: all 16 bits are 0
            s += '0000'
            s += str("{:0>14b}".format(int(content2[1],16)))

        elif content2[0].lower() == "load": # load is 0001
        # load reg data
        # next 4 bits are register, next 8 trash, next
            s += '0001'
            s += str("{:0>14b}".format(int(content2[1], 16)))
            s += str("{:0>8b}".format(int(content2[2], 16)))

        elif content2[0].lower() == "store": # store is 0010
            s += '0010'
            s += str("{:0>16b}".format(int(content2[1],16)))

        elif content2[0].lower() == "advance":  # advance is 0011
            s += '0011'
            s += str("{:0>16b}".format(int(content2[1],16)))

        elif content2[0].lower() == "increment":  # increment is 0100
            s +=  '0100'
            s += str("{:0>16b}".format(int(content2[1],16)))

        elif content2[0].lower() == "pause":  # pause is 0101
            s += '0101'
            s += str("{:0>16b}".format(int(content2[1],16)))

        elif content2[0].lower() == "add":  # add is 0110
            s += '0110'
            s += str("{:0>16b}".format(int(content2[1],16)))


output = open('output.coe', 'w+')
with output as file:
    file.write(s)
