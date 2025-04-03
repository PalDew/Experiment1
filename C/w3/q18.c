// Fibonacci Series printing
// This is the for loop version 
#include <stdio.h>

int main (int argc, char *argv[]){
int n;
printf("How many items in the fibonacci series?\n");
scanf("%d",&n);
int f[n] = { };
f[1] = 1;
printf("%d\t%d\t",f[0], f[1]);
if ( n > 2){
for (int i = 2; i<n ; i++)
{f[i] = f[i-1] + f[i-2] ;
printf("%d\t" ,f[i]); 
}
}
else
return 0;}

