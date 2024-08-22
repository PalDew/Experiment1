from sys import argv

script, filename = argv

print(f"We're going to erase {filename}.")
print(f"If you don't want that, hit Ctrl+C (^C).")
print(f"If you do want that, hit RETURN ")

input ("?")
## The value of this input is true regardless of what you type. Ctrl+C jsut quits it in the middle.
print("Opening the file...")
target = open (filename, "w")
print("Truncating the file. Goodbye!")
target.truncate()

print("Now I am going to ask you for three lines.")

line1 = input ("line 1: ")
line2 = input ("line 2: ")
line3 = input ("line 3: ")

print("I'm going to write these to the file.")

target.write(line1)
target.write("\n")
target.write(line2)
target.write("\n")
target.write(line3)
target.write("\n")


print("And finally, we close it.")
target.close()
