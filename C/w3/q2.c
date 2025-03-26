// Checking if a number is prime or not

#include<stdio.h>

int main (void)
{
int num, count=0;
printf("We gonna be priming. Enter a number to check:\n");
scanf("%d", &num);
for(int i=2; i<num ;i++){
  if (num % i == 0){
      count++;
}
}
if (count == 0)
  {printf("You are priming\n");}
else{ 
printf("No, not prime!\n");
}
return 0;
}
