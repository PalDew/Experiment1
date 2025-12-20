#!/user/bin/env python3

for letter in "Giraffe Academy":
    print(letter)
print("\n")

friends = ["Jim", "Karen", "Kevin"]
for a in friends:
    print(a)
print("\n")

for a in range(len(friends)):
    print(friends[a])  ## since the list starts
print("\n")


for index in range(4, 10):
    print(index)
print("\n")

for a in range(0, 5):
    if a == 0:
        print("First Iteration")
    else:
        print("Not first")
