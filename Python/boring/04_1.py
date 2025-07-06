catNames = [] ## This is a way to declare empty list   
while True:
    print("Enter the name of the cat number " + str(len(catNames)+1) + ". Or enter nothing to stop.")
    name = input()
    if name == "":
         break
    catNames = catNames + [name] ##adding two lists, and treating the varible name with single element as a list
print("The cat names are: ")    
for name in catNames:
    print(name)
