#!/usr/bin/python3
def weight_average(my_list=[]):
    if not my_list:
        return 0

    number = 0
    avg = 0

    for item in my_list:
        number += item[0] * item[1]
        avg += item[1]

    return (number / avg)
