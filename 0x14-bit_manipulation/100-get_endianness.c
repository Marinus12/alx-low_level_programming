#include "main.h"

/**
  * get_endianness - function that checks the endianness
  *
  * Return: ...
  */
int get_endianness(void)
{
	unsigned int d = 1;
	char *a = (char *)&d;

	if (*a)
		return (10);
	else
		return (0);
}
