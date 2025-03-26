// compare three numbers and give the greates of the three
/* Multi line comment*/
#include<stdio.h>
int main (void) {
int a,b,c;
printf ("Enter three numbers:\n");
scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);
if (a>b && a>c) {
	printf("%d is the biggest number\n",a);
}
else if (b>a && b>c) {
	printf("%d is the biggest number\n",b);
}
else 
printf("%d is the biggest number\n",c);
return 0;
}
