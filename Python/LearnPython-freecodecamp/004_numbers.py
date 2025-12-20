#!/usr/bin/env python3
from math import *
## Working with numbers

## You can just print them
print("This is just a simple number:")
print(5)
print("This is a floating point nuber (They can be negative too):")
print(-5.349)

## We can perform basic arithematic too
print("We can directly do airthmetic operations")
print("3 + 4.056 =" , 3+4.045)
## Addition, subtraction, multiplication or division can be done directly
## When given multiple operators, BODMAS rule is followed.
print("Using bodmas, 2 + 2 / 2 =", 2 + 2 / 2)

# oh and the modulus operator.
print("19 % 5=", 19 % 5)
#checking for floating numbers
print("15.5 % 3.3 =", 15.5 % 3.3) #This is a revelation.

# You can store the numbers as variables too
myNum = 56
print("My number is ",myNum)

## Built-in functions
#convert this to a string
print("The length of my number (as string) is ",len(str(myNum)))
print("Now, I am going to treat it as a string and use it as an array")
print("Displaying one element at a time, reversed")
print(str(myNum)[1],str(myNum)[0])

# The absolute function
myOtherNum = -10.4
print("The real number was", myOtherNum, ". It's absolute value is", abs(myOtherNum))

# Power function
print("We can use power function. 4^(-.5)=", pow(4,-.5))

# Max function gives the maximum of all the items passed to it as the arguments.
print("The max of ([1,2,-5,100]) is :", max([1,2,-5,100]))

# Min function is the opposite of max
print("The min of ([1,2,-5,100]) is :", min([1,2,-5,100]))

# Another cool function is round
print("Let's round -1.55:", round(-1.55))

## These are found in the math library, which we imported
#Floor function
print("Let's floor 2.45", floor(2.45))
print("Let's floor -2.45", floor(-2.45))

#Ceil function
print("Let's ceil 2.45", ceil(2.45))
print("Let's ceil -2.45", ceil(-2.45))

#sqrt function
print("The square root of 69 is:", sqrt(69))
# print("The square root of -69 is:", sqrt(-69))
## Negative squre root throws an error
# These are the constants from the math library
print(pi, e, tau, inf, nan)
