# This program says hello and asks for my name.

print("Hello, world!")
print("What is your name? ")
myName = input()

print("Good to meet you, " + myName)
print("The length of your name is:")
print(len(myName))
print("What is your age(in years)? ")
myAge = int(input())
print("You will be " + str(myAge + 1) + " in a year.")
print(f"{myAge} is just a number. That number just might be equal to my age.")
