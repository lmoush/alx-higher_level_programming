#!/usr/bin/python3
def uppercase(moush):
    for i in moush:
        if ord('a') <= ord(i) <= ord('z'):
        i = chr(ord(i) - 32)
        print("{:s}".format(i), end="")
    print()
