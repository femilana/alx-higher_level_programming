#!/usr/bin/python3

def magic_calculation(a, b):
    from magic_calculation_102 import add, sub
    if a < b:
        new = add(a, b)
        for num in range(4, 6):
            new = add(new, num)
        return new
    else:
        return sub(a, b)
