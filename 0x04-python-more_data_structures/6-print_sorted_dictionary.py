#!/usr/bin/python3
def print_sorted_dictionary(a_dictionary):
    list_cord = list(a_dictionary.keys())
    list_cord.sort()
    for item in list_cord:
        print("{}: {}".format(item, a_dictionary.get(item)))
