#include "main.h"

/**
  * get_bit - return value of a bit at a given index
  * @index: index starting from 0 of the bit gotten
  * @n: ...
  *
  * Return: value of the bit at index, or -1 for error
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	int value;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = 1UL << index;
	value = (n & mask) ? 1 : 0;

	return (value);
}
