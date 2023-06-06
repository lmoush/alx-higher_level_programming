#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
cnv_str = str(number)
x = cnv_str[-1]
if number > 0 or number == 0:
    if int(x) > 5:
        print(f"Last digit of {number} is {x} and is greater than 5")
    elif int(x) == 0:
        print(f"Last digit of {number} is {x} and is 0")
    elif int(x) < 6 and int(x) != 0:
        print(f"Last digit of {number} is {x} and is less than 6 and not 0")
else:
    print(f"Last digit of {number} is -{x} and is less than 6 and not 0")
