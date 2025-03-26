// This calculates ASCII value of a character. 
/*Turns out that if you just print the integer value of a character, it gives out the result as ASCII character*/
#include<stdio.h>
int main (void){
char c;
printf("What is your character?\n");
scanf ("%c", &c);
printf("Your character %c has %d as its ascii value\n",c ,c);
return 0;
}
