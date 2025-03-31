// Using while loops for calculating the sum of first n natural numbers.

#include <stdio.h>

int main(int argc, char *argv[]){
int n, i = 1, sum = 0;
printf("Likh de bhai: ");
scanf("%d", &n);
do {
  sum = sum +i;
  i++;}
while (n>=i);
printf("The sum is: %d\n", sum);
return  0;
}
