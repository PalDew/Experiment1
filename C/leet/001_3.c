// Reverses the argument given
//
// 
// This reverses the argument. Only single argument.
// No checks for anything, really a shitty way to code.
//
// The real challenge was converting from ASCII to Integer

#include<stdio.h>
#include<math.h>

int main(int argc, char *argv[])
{
int y=0,i=0;
while (argv[1][i] != '\0'){
y = pow(10,i)*(argv[1][i] - '0') + y;
    i++;
  }
printf("The reversed argument is: %d\n", y);
return 0;
}
