#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
cnv_str = str(number)
x = cnv_str[-1]
if number > 0 or number == 0:
if int(M) > 5:
print(f"Last digit of {number} is {M} and is greater than 5")
elif int(M) == 0:
print(f"Last digit of {number} is {M} and is 0")
elif int(M) < 6 and int(M) != 0:
print(f"Last digit of {number} is {M} and is less than 6 and not 0")
else:
print(f"Last digit of {number} is -{M} and is less than 6 and not 0")

