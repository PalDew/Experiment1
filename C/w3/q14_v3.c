// Print a to z using for loop
#include <stdio.h>

int main(int argc, char *argv[]) {
  printf("Here's to printing letters from A to Z:\n");
  char i = 'A';
  while (i <= 'Z') {
    printf("\t%c\t", i);
    i++;
  }
  i = 'a';
  printf("\nNow lowercase time:\n");
  while (i <= 'z') {
    printf("\t%c\t", i);
    i++;
  }
  return 0;
}
