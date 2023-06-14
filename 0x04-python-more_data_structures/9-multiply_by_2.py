#!/usr/bin/python3
def multiply_by_2(a_dictionary):
    new_dictionary = a_dictionary.copy()
    for moush, hello in list(new_dictionary.items()):
        new_dictionary[moush] = hello * 2
    return new_dictionary
