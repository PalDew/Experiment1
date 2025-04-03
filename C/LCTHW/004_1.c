// Exercise 9 in the book
// This just describes and exemplifies the while loop
// Homework
#include <stdio.h>
int main(int argc, char *argv[]) {
  int i = 25; // it gives garbage values if you don't initialize it.
  while (i > 0) {
    printf("%d\t", 25 - i);
    i--;
  }
  return 0;
}
