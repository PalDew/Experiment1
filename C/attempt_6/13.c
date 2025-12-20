#include <stdio.h>
int main (int argc, char *argv[]){
  int c, blank = 0; //0 means previous was not blank, 1 means the last one was blank.
  while ((c = getchar()) != EOF){
     if (c == ' '){
     if (blank == 0){
     putchar(c);
     blank ++;}
     }
    else {
    putchar(c);
    blank = 0;}
    }
  return 0;
}

/*
I heard that this works as well:

int main void (){
int c, last =0;

while (c = getchar() !== EOF){
if (c != ' ' || last != ' ')
{purchar(c);}
last = c'
}
return 0
}

*/
