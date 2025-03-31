// Print a to z using for loop
#include <stdio.h>

int main(int argc, char *argv[]) {
  printf("Here's to printing letters from A to Z:\n");
  char i;
  for (i = 'A'; i <= 'Z'; i++)
    printf("\t%c\t", i);

  printf("\nNow lowercase time:\n");
  for (i = 'a'; i <= 'z'; i++)
    printf("\t%c\t", i);
  return 0;
}
