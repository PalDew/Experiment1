#include <stdio.h>
int main(int argc, char *argv[]) {
  int c;
  c = getchar();
  while (c != EOF) {
      putchar(c);
      c = getchar();
  }
    return 0;
}

/*We can also use a more terse syntax
 *int c;
 *while ((c = getchar()) != EOF)
 *putchar();
 */
