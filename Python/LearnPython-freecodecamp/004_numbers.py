#!/usr/bin/env python3

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

#convert this to a string
print("The length of my number is ",len(str(myNum)))
print("Now, I am going to treat it as a string and use it as an array")
print("Displaying one element at a time, reversed")
print(str(myNum)[1],str(myNum)[0])
