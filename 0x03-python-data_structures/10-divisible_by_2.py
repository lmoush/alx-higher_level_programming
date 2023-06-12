#!/usr/bin/python3
def divisible_by_2(my_list=[]):
    moush = []
    for number in my_list:
        if number % 2 == 0:
            moush.append(True)
        else:
            moush.append(False)
    return moush
