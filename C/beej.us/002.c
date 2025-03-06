//get an input and display the name. The input is the name.
#include <stdio.h>

int main (void)
{
  char name[100];
  printf("Please enter your name. ");
  scanf("%s", name);
  printf("Hi, %s!\n" ,name);
  return 0;
}
