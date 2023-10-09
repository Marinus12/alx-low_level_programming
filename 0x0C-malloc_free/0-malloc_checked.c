#include "main.h"

/**
  * malloc_checked - Terminate with a status value 98 if failed
  * @b: allocated memory 
  * Author: Marinus
  *Return: 0 means program is a success
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
