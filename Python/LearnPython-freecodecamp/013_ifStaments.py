#!/usr/bin/env python3

is_male = False
is_tall = True
if is_male and is_tall:
	print("You are a male and a tall person.")
elif is_male and not(is_tall):
        print("You are a male and not a tall person.")
elif not(is_male) and not(is_tall):
        print("You are neither a male nor a tall person.")
else:
        print("You are not a male but a tall person.")
# There are logical and and or operators that can be used in if-else statements
# you can check for negative of a boolean operator by not (boolean_variable)
