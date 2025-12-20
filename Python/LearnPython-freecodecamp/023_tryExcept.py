#!/usr/bin/env python3

## This is aptly named section - catching errors in the program.


try:
    number = int(input("Enter a number: "))
    value = 10 / 0
    print(value)
except ZeroDivisionError as Err:
    print(Err)
except ValueError:
    print("Invalid Input Type.\nEnter a number.")

# This code fails when we enter a string, instead of a number.
# invalid literal for for int() in base 10
