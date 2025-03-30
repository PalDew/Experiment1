// This is even more optimized for finding out primes between 1 and N.

#include <stdio.h>

int main (int argc, char *argv[]){
int num, count=0, count_a = 0;
  printf("Enter your number: ");
  scanf("%d", &num);
  if (num ==2){count++;}
  for (int i = 1; i<num; i=i+2 )
   {if (num % i == 0){count_a++;}}
  if (count_a == 1 || count == 1)
   {printf("Yes prime\n");}
  else printf("Not a prime\n");
  return 0;
}
