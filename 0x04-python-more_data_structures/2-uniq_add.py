#!/usr/bin/python3
def uniq_add(my_list=[]):
    the_uniq_list = set(my_list)
    number = 0

    for num in the_uniq_list:
        number += num

    return (number)
