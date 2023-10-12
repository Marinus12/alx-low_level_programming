#include "function_pointers.h"

/**
  * print_name - prints a name
  * @name: person name
  * @f: Pointer to function
  * Return: Nothing
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

