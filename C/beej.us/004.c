//Operators
#include<stdio.h>
int main() 
{
    int i = 5;
    printf("The value of i is 5 right now\n");
    i = +3; // i becomes 3
    printf("i after i = +3: %d\n", i);
    i = 5; //reset i
    i += 3; // i becomes 8
    printf("i after i += 3: %d\n", i);
    int x=0, y;
    printf("Enter an Integer ");
    scanf("%d", &y);
    printf("%d\n",y);
    x += y>5 ? 5:-5; 
    printf("If the integer is greater than 5, we add 5, else we subtract 5 from 0.\nResult: %d\n",x);
	int b;
	printf("Enter another number: ");
	scanf("%d" ,&b);
	printf("The number %d is %s.\n", b , b % 2 == 0? "even" : "odd");  
	return 0;
}
