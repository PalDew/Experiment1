myPets = ['Zohie', "Pookie", "Hashie"]
print("Enter new pet's name: ")
name = input()
if name not in myPets:
        print("I do not have " + str(name) + " as a pet.")
else:
        print("Yes! " + str(name) + " is my pet.")
