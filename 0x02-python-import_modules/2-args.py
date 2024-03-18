#!/usr/bin/python3
if __name__ == "__main__":
    import sys
    lenght = len(sys.argv) - 1

    if lenght == 0:
        print("{} arguments.".format(lenght))
    elif lenght == 1:
        print("{} argument:".format(lenght))
    else:
        print("{} arguments:".format(lenght))

    if lenght >= 1:
        lenght = 0
        for arg in sys.argv:
            if lenght != 0:
                print("{}: {}".format(lenght, arg))
            lenght += 1
