/* using bitwise xor, swapping the two variables.*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]), b = atoi(argv[2]);
  if (argc != 3) {
    printf("Two arguments only. Not more, not less.\n");
    return 1;
  } else {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("The swapped numbers are %d , %d\n", a, b);
  }
  return 0;
}
