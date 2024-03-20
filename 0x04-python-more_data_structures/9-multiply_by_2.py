#!/usr/bin/python3
def multiply_by_2(a_dictionary):
    new_directory = a_dictionary.copy()
    list_key = list(new_directory.keys())

    for item in list_key:
        new_directory[item] *= 2

    return (new_directory)
