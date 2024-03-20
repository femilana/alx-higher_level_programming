#!/usr/bin/python3
def square_matrix_map(matrix=[]):
    return (list(map(lambda item: list(map(lambda new: new**2, item)), matrix)))
