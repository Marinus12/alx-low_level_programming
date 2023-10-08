#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * malloc_checked - Terminate with a status value 98 if failed
  * @b: integer var that holds the memory size
  * Author: Marinus
  *Return: 0 means program is a success
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(96);

	return (ptr);
}
