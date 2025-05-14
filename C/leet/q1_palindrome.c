#include <stdio.h>
#include <stdbool.h>
 bool isPalindrome(int x) {
    if ( x < 0)
			{
			return true;
			}
		else if( x>= 0)
		 	{
				x
				}
		else
			{return false;}
}
		
int main (int argc, char *argv[])
{
    int x;
    printf("Enter x: ");
    scanf("%d", &x);
		// %d takes care of the limit in 32 bit systems
		if (isPalindrome(x)){
    printf("x: %d is not a palindrome", x);
		}
		else {printf("x: %d is a palindrome", x);}
		return 0;
}

