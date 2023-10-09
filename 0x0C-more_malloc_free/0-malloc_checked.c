#include "main.h"

/**
  * malloc_checked - Terminate with a status value 98
  * @b: allocated memory
  * Author: Marinus
  *Return:a pointer to the allocated memory
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);

}
