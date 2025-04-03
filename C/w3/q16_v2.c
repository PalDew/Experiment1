// Factorial, the normal way
// This is very straight forward
#include <stdio.h>

int main (int argc, char *argv[]){
  int n, fact = 1;
  printf("Enter your number: ");
  scanf("%d", &n);
  for (int i=n; i>=1; i--){
  fact = i * fact;
  }
  printf("%d factorial = %d\n", n, fact);
return 0;
}

