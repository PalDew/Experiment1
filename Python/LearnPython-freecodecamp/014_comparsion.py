#!/usr/bin/env python3

# Take three parameters as input and print out the biggest of the numbers

def maxNum (a, b, c):
    if a >= b and a >= b:
        return a
    elif b>=a and b>=c:
        return b
    else:
        return c

print(maxNum(3, 6, -4))
