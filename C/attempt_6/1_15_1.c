#include <stdio.h>

int main (int argc, char *argv[])
{
    int c, nw=0, nc=0, langth[50]={0};
    while((c = getchar()) !=  EOF)
    {
	if (c == '\n' || c == ' '){
	    langth[nw] = nc;
	    ++nw;
	    nc = 0;
	}
	else
	++nc;
    }

    if (nc > 0){ 		// for the last word
	langth[nw] = nc;
	++nw ;
    }
    printf("\There are %d number of words.\n" , nw);
    for (int i = 0; i < nw ; i++){
	printf("Word %d - ", i+1);
	for (int j = 0; j < langth[i]; j++)
	putchar('*');
	putchar'\n');
    }


    // printf("The %d word is %d characters long.\n", i, langth[i]);
    return 0;
}
