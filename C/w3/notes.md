#c #language #programming
# Notes on C langugae
[Geek for Geeks](https://www.geeksforgeeks.org/c-language-introduction/?ref=lbp)

## Notoes:
- C is a procedural language - meaning, you get to decide the sequence in which certain functions get executed. 
- Used in operating systems, embedded systems, AI, Financial Applications, Scientific applications, etc.

Impprtant Features:
1. Fast and Efficient
2. Modular
3. Statically Typed
4. General-Purpose
5. Procedural
6. Rich Set of Built-in features
7. Libraries
8. Middle Level (I consider it quite low level language)
9. Portable
10. Easy to Extend

Not Object oriented and not Concurrent

Learnt about for, while, do-while and if statements.
Also learned that we can do unit tests and create our own header files.

## Structures
First you define structures (a group of related variables)
Like: 

struct City = {
char *name;
int population;
}

Here, struct is the data type. City is the name of that particular structure.
You can have multiple structures.

Then, when you want to use one or more instance of that struct, you have to define a variable.

struct City c = {"Raipur" ; "1000"};

And you can recall or use one of the variables in city c by c.name and c.population.

While assignment or initilization:
It is better to write c.a = x; rather than just struct c = {3 , "a" , 4} 

## Pointers
A pointer is a variable. It has its own address and value.
If we assign the pointer the address of something else, it stores the adress of that something else as its value.
\* is called the deferencing operator.

Ex: 
x = 8 ;
*x_ptr =  &x;

This pointer stores the address of x as its value.
x may have its own value, 8 in this case.
&x will also have the location to the memory. But the pointer will store the memory as its value.

And when we dereference the pointer on its own; we get the original value of the address stored in the pointer. 
Like;

*x_ptr will give the value as 8 after the previous steps.
