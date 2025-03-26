#include <stdio.h>

int main (void) {
  char *fullname;
  printf("Type your full name please\n");
  fgets(fullname, sizeof(fullname), stdin);
  printf("Hello %s", fullname);
return 0;
}
