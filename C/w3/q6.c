/*This program accepts the integers from the command line. No need for pesky
 * scanf and printf*/
#include <stdio.h>
#include <stdlib.h>

int main(int a, char *b[]) {
  if (a != 3) {
    printf("Only two arguments please!\n");
    return 1;
  }

  else {
    int sum;
    sum = atoi(b[2]) + atoi(b[1]);
    printf("Sum is %d\n", sum);
  }
  return 0;
}
// Two learnings:
// 1. The index starts from 0, but the first element is the name of the program
// in char * . Generally reserved for char *argv[]
// 2. if you use atoi(b[2]) when there was no input given, it will throw errors.
