#!/usr/bin/python3
def to_subtract(list_num):
    sub = 0
    maximum_list = max(list_num)

    for item in list_num:
        if maximum_list > item:
            sub += item

    return (maximum_list - sub)


def roman_to_int(roman_string):
    if not roman_string:
        return 0

    if not isinstance(roman_string, str):
        return 0

    roman = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
    list_key = list(roman.keys())

    number = 0
    last_roman = 0
    list_number = [0]

    for ch in roman_string:
        for r_num in list_keys:
            if r_num == ch:
                if roman.get(ch) <= last_roman:
                    number += to_subtract(list_number)
                    list_number = [roman.get(ch)]
                else:
                    list_number.append(roman.get(ch))

                last_roman = roman.get(ch)

    number += to_subtract(list_number)

    return (number)
