#!/usr/bin/env python3

# A function is lot of pre-built things, working together to solve a particular task.

## Help to organize and break the code and make it more readable/understandable.
## This funciton will say hi to the programmer

def saysHi():
    print("Hello User")

print("top")
saysHi()
print("bottom")

## Making functions more powerful by passing parameters
def saysHi(name, age):
    print(f"Hello {name}, you are {age} years old.")

saysHi("Mike", 20)
saysHi("Steve", "Yellow")

# You can pass an array, a boolean or any and multiple data types to a funciton.
