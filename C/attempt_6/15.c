#include <stdio.h>
/* count digits, white space, others */
// others are the characters like a,b,c .... and special symbols
// white spaces are \n \t and ' '
// digits are ... digits from 0 to 9
int main (int argc, char *argv[]){
int c, i, nwhite=0, nother=0 ;
int ndigit[10] ;

  for (i = 0 ; i < 10; i++){
ndigit[i] = 0;}

while ((c = getchar ()) != EOF )
  if (c>='0' && c<='9')
  ++ndigit[c-'0'] ; 		// c is read an ascii character. So we convert it to ascii by removing the ascii value of 0 from it.
  // can also be done using ++ndigit[int(c)- 48]
  else if (c == ' ' || c == '\n' || c == '\t')
    ++nwhite ;
  	   else
         ++nother ;
printf("\ndigits =");
for (i=0;i<10;++i)
  printf(" %d", ndigit[i]); //This will just give you the number of occurrences of the digit, without makig it pretty
printf(", white space = %d, other = %d\n", nwhite, nother);
return 0;
}
