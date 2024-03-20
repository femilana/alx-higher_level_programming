#!/usr/bin/python3
def square_matrix_simple(matrix=[]):
    new_matrixx = matrix.copy()

    for num in range(len(matrix)):
        new_matrixx[num] = list(map(lambda x: x**2, matrix[num]))

    return (new_matrixx)
