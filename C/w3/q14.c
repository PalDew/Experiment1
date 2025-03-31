// Print a to z using for loop
#include <stdio.h>

int main(int argc, char *argv[]) {
  printf("Here's to printing letters from A to Z:\n");
  int i;
  for (i = 97; i <= 122; i++)
    printf("\t%c\t", i);

  printf("\nNow capital time:\n");
  for (i = 65; i <= 90; i++)
    printf("\t%c\t", i);
  return 0;
}
