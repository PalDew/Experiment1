# Examples of Variable Declarations

x = 5
y = 6
print (x)
print (y)

# Redefining the varaible.
x = 'Sally'
print (x)

print(f"The type of variable {x} is {type(x)}")
print(f"The type of variable {y} is {type(y)}")

#Three variables declared in a line
a, b, c = "Aye", "Bye", "Cya"
print(a)
print(b)
print(c)

# three variables declared at once
d = e = f = "Whatte Three Variables! "
print(d)
print(e)
print(f)
x = 5
print(d + e + f)
print(a, b, c)
print(y + x)
print("Hello", "World")

#Global variable declare outside the function
a1 = "awesome"
def myfunc():
    print(f"The name of my windows manager is " + a1)
myfunc()

#Global variable declared inside the function

def myfunc1():
    global a2
    a2 = "i3wm"
myfunc1()

print("But currently I am using " + a2)
