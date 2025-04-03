 // Printing a table of a number
 
 #include <stdio.h>
int main (int argc, char *argv[]){
int n;
printf("I am not gonna go beyond x10.\n Enter your number: ");
scanf("%d", &n);
for (int i = 1; i<= 10 ; i++)
     printf("%d x %d = %d\n", n, i, n*i );
return 0;
 }
