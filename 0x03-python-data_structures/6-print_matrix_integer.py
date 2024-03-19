#!/usr/bin/python3
def print_matrix_integer(matrix=[[]]):
    if not matrix:
        print()
    else:
        for r in range(len(matrix)):
            for i in range(len(matrix[r])):
                if i != len(matrix[r]) - 1:
                    endsp = ' '
                else:
                    endsp = ''
                print("{:d}".format(matrix[r][i]), end=endsp)
            print()
