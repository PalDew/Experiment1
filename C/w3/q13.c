// This Calculates the sum of first n natural numbers
// I like that the formula is n*(n+1)/2
#include <stdio.h>

int main(int argc, char *argv[]) {
  int n, sum;
  printf("Enter your number: ");
  scanf("%d", &n);
  sum = n*(n+1)/2;
  printf("The sum is: %d\n",sum);
return 0;
}
