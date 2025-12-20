# Concatenation is joining of strings.
phrase = "Giraffe Academy"
print(phrase + " is cool")

# Common functions
## variable.lower() to convert the string to lowercase.
print(phrase.lower())

## variable.upper() to convert the string to lowercase.
print(phrase.upper())

## variable.isupper() to check if it is uppercase?
print(phrase.isupper())

## combining the string functions
print(phrase.upper().isupper())

## length of a string
### It counts the spaces inside the "" as well, not previous to or after it
print(len(phrase))

## Accessing individual elements in the phrase
print(phrase[0]+phrase[3]+phrase[14])
print(phrase[0],phrase[3],phrase[14])
print(phrase[0:7]) #The last limit is excluded

## Index funtion tells us the index of a character
print(phrase.index("G"))
print(phrase.index("f")) #This gives the first instance of the letter
print(phrase.index("ffe")) #Ths tells us the index at which it starts

#It will throw an error if you try to index something that is not the part of the string.
