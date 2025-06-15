// Exercise 15 in the book
//
//
#include <stdio.h>

int main(int argc, char *argv[]) {
  // crete two example arrays
  int ages[] = {23, 43, 12, 89, 2};
  char *names[] = {"Alan", "Frank", "Mary", "John", "Lisa"};

  // safely get the size of ages
  int count = sizeof(ages) / sizeof(int); //This is a brillinat way to get the number of int eloements in the array
  int i = 0;

  // first way using indexing
  for (i = 0; i < count; i++) {
    printf("%s has %d years alive.\n", names[i], ages[i]); //calls the first element of both the arrays and displays them.
  }
  printf("---\n");

  // set up pointers to the start of arrays
  int *cur_age = ages; //cur_age is a pointer of integer type, pointing towards the first element of the ages array.
  char **cur_name = names; //cur_name is a pointer of type character, pointing towards the pointer. Here, names is an array of strings. Strings themselves are an array of characters. char ** points to a char *.

  // second way, using pointers
  for (i = 0; i < count; i++) {
    printf("%s is %d years old.\n", *(cur_name + i), *(cur_age + i)); //* means value of the pointer. Thus, it will print the value, the pointer is pointing to.
  }

  printf("---\n");

  // third way, treating pointers as arrays
  for (i = 0; i < count; i++) {
    printf("%s is %d years old again.\n", cur_name[i], cur_age[i]); // seems straight-forward, we can treat arrays as pointer to the first element, and pointer to the first element as an array, both ways
  }

  printf("---\n");
	
// fourth way with pointers in a stupid complex way
	for (cur_name = names, cur_age = ages; (cur_age - ages) < count; cur_name++, cur_age++) { /*
 Pointer arithmetic is brilliaant. You can subtract or add two pointers (of the same type of course)
 And the result will be treated as an integer.
  */
	printf("%s lived %d years so far.\n", *cur_name, *cur_age);
}
  return 0;
}
