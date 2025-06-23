// This is exercise 16 of the book
//
// Talks about structures and pointers to them.


#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>

struct Person { //defines and declares the datatype Person (we use struct for a custom object-like data in C)
char *name;
int age;
int height;
int weight;
};

struct Person *Person_create(char *name, int age, int height, int weight) //this is a function of the type struct person, named Person_create
{
  struct Person *who = malloc(sizeof(struct Person));
  assert(who != NULL); //checking for null, because malloc returns null in case of a failed operation.

  // we have to use the arrow operator because we are dealing with pointers here. We can use (*who.age = age too, that would be syntactically correct)
 who -> name = strdup(name); //strdup returns a pointer to a null terminated string. 
  who -> age = age; //in the struct of person, named who; find the age variable and assign it to the age variable that is input from the function. 
  who -> height = height;
  who -> weight = weight;

  return who;
}

void Person_destroy (struct Person *who){
  assert(who != NULL);
  free(who->name); //name is stored separately. Beacuse of strdup function. To avoid memory leaks
  free(who); //free the entire who struct
}

void Person_print(struct Person *who)
{
  printf("Name: %s\n" ,who->name);
  printf("\tAge: %d\n" ,who->age);
  printf("\tHeight: %d\n" ,who->height);
  printf("\tWeight: %d\n" ,who->weight);
}

int main (int argc, char *argv[]){
//make two people structures
  struct Person *joe = Person_create("Joe Alex", 32, 64, 140);
  struct Person *frank = Person_create("Frank Blank", 20, 72, 180);

//print them out and see their memory location
  printf("Joe is at memory location %p:\n", joe);
  Person_print(joe);

  printf("Frank is at a memory location %p:\n", frank);
  Person_print(frank);

//make everyone age 20 years and print them again
  joe -> age +=20;
  joe -> height -=2;
  joe -> weight +=20;
  Person_print(joe);

  frank ->age +=20;
  frank ->weight +=20;
  Person_print(frank);

// Destroy them both to free up space
  Person_destroy(joe);
  Person_destroy(frank);
  return 0;
}
