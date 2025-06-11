/* This program just prints the reverse of a number */
//
//



#include<stdio.h>

int main (int argc, char *argv[])
{
int x,i,y=0;
printf("Enter x: ");
scanf("%d", &x);
printf("You number reversed:\n");
for (i = 0; x > 0 ; i++)
{
// printf("%d\n", x%10);   - we can use this line to see all the digits one by one, in reverse
y = y * 10 + (x%10); 
x = x /10;
}
printf("The number reversed: %d\n",y);
return 0;
}
