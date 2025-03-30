/*
Calculates the area and perimeter of rectangle
*/
#include <stdio.h>

float perimeter(int l, int w){
return (2 *(l+w));
}
float area (int l, int w){
return l*w;
}
int main (int argc, char *argv[])
{
float l, w;
printf("Enter length and width: \n");
scanf("%f %f", &l, &w);
printf("The area of rectangle is: %.2f\n", area(l,w));
printf("The perimeter of rectangle is: %.2f\n",perimeter(l,w));
return 0;
}
