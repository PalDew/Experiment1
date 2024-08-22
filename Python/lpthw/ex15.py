from sys import argv

script, filename = argv

txt  = open (filename)

print(f"Here's your file {filename}:")
print(txt.read())
txt.close()
print(f"Type your file name again:")
file_again = input ("> ")

txt_again = open(file_again)

print(txt_again.read())
txt_again.close()

print("A more terse way of doing things will be:")
print(open("ex15text.txt","r").read())
