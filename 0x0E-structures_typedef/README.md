0x0E-structures_typedef Project

In this project, I learned about using structures and typedef in C.

Header File 📁

dog.h: Header file containing definitions and prototypes for all types and functions written in the project. Type/File Defintion/Prototype struct dog char *name float age char *owner typedef dog_t struct dog 1-init_dog.c void init_dog(struct dog *d, char *name, float age, char *owner); 2-print_dog.c void print_dog(struct dog *d); 4-new_dog.c dog_t *new_dog(char *name, float age, char *owner); 5-free_dog.c void free_dog(dog_t *d);

Tasks 📃

0. Django

dog.h: Header file that defines a new type struct dog with the following elements:

char *name
float age
char *owner
Resource

0x0d. Structures
struct (C programming Language)
struct memory layout in C
Betty Documentation Style: Data Structures
0x0d typedef
typedef
Programming in C by Stephen Kochan Chapter 8, working with Structures pg 163-189 - stephen g. kochan(1).pdf)
More on structs
The Lost Art of C Structure Packing Advanced, not mandatory
Tasks

dog0
Poppy : A new type struct dog with the following elements.
name, type = char *
age, type = float
owner, type = char *
Compile the code this way: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
dog1
A dog is the only thing on earth that loves you more than you love yourself : A function that initialize a variable of type struct dog
Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);
Compile the code this way: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-init_dog.c -o b
dog2
A dog will teach you unconditional love. If you can have that in your life, things won't be too bad : A function that prints a struct dog
Prototype: void print_dog(struct dog *d);
Format: see example below.
You are allowed to use the standard library.
If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
If d is NULL print nothing.
Compile the code this way: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_dog.c -o c
dog3
Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read : Define a new type dog_t as a new name for the type struct dog
Compile the code this way: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d
dog4
A door is what a dog is perpetually on the wrong side of : A function that creates a new dog.
Prototype: dog_t *new_dog(char *name, float age, char *owner);
You have to store a copy of name and owner
Return NULL if the function fails.
Compile the code this way: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-new_dog.c -o e
dog5
How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg : A function that frees dogs.
Prototype: void free_dog(dog_t *d);
Compile the code this way: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-free_dog.c 4-new_dog.c -o f
Run the code this way: valgrind ./f