#include "main.h"

/**
  * swap_int - swaps the values of two integers
  *  @a: An integer swap
  *  @b: Another integer to swap
  *  Return: 0
  */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
