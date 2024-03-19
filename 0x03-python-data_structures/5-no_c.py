#!/usr/bin/python3
def no_c(my_string):
    new_string = ""
    for ele in my_string:
        if ele != "c" and ele != "C":
            new_string += ele
    return new_string
