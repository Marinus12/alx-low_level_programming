#include "function_pointers.h"

/**
  * int_index - searches for an integer
  * @size: number of elements in an array
  * @cmp: pointer to the function
  * @array: an array of integers to search
  * Return: 0 if false
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}


	return (-1);
}
