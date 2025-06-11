// Reverse a number, in a separate function
#include<stdio.h>

int reverse (int x)
{ int i,y=0;
for (i = 0; x > 0 ; i++)
{
// printf("%d\n", x%10);   - we can use this line to see all the digits one by one, in reverse
y = y * 10 + (x%10); 
x = x /10;
}
return y;
}

int main (int argc, char *argv[])
{
int x;
printf("Enter x: ");
scanf("%d", &x);
printf("The number reversed: %d\n", reverse(x));
return 0;
}
