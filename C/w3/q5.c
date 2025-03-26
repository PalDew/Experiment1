// Swap two numbers

#include<stdio.h>
int main (void){
int a, b;
printf("Enter two numbers: \n");
scanf("%d %d",&a, &b);
a = a + b;
b = a - b;
a = a - b;
printf("The reversed numbers are %d %d\n", a ,b);
printf("Dattebayo, I could have just changed the sequence lol\n");  
return 0;
}
