#!/usr/bin/env python3

#return statements in python functions

def cube (number):
    return number*number*number, number ** 3, pow(number,3)
# The print, if placed after return won't work because the function exits after returning a value
result = cube(4)
print(result)
