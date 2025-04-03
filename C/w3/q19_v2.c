// Find out the GCD or HCF of two numbers using recursion.
// However, this one does not use euclidean long division method, but 

#include <stdio.h>
int HCF(int b, int a){
int gcd;
for (gcd = a ; gcd >= 1 ; gcd--)
  {  if (b % gcd == 0 && a % gcd == 0)
    {return gcd;}
}
return gcd;
}
int main(int argc, char *argv[]) { 
int a,b;
printf("Two number, you must enter, for H.C.F: ");
scanf("%d %d", &a, &b);
// making sure that b is the greater of the two numbers
if (a > b){
a = a + b;
b = a - b;
a = a - b;
}
// printf("In incrasing order, the numbers are: %d & %d\n", a, b);
  //You can uncomment this line for checking the swapping is successful or not 
printf ("The HCF of %d & %d is: %d\n", a,b, HCF(b,a));
return 0; }
