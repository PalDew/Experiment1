// This is to calculate 
#include <stdio.h>
#include <math.h>

float c_in(float prin,float rate, float time)
{return (prin * (pow((1+rate/100),time)));}

int main (int agrc, char * argv[]){
float amt,prin,rate,time,com_int;
printf("Enter your principal, rate and time\n");
scanf("%f %f %f",&prin, &rate, &time);  
com_int = c_in(prin,rate,time);
printf("The amount is %.2f\n", com_int);
printf("The interest is %.2f\n", com_int - prin);
return 0;
}
