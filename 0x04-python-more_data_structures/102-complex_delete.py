#!/usr/bin/python3
def complex_delete(a_dictionary, value):
    list_of_keys = list(a_dictionary.keys())

    for value_of_dic in list_of_keys:
        if value == a_dictionary.get(value_of_dic):
            del a_dictionary[value_of_dic]

    return (a_dictionary)
