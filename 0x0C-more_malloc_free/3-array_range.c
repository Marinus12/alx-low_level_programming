#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: array
 */
int *array_range(int min, int max)
{
	int *arr, i = 0, size;

	if (min > max)
		return (0);
	size = max - min + 1;

	arr = malloc(size * sizeof(int));

	if (!arr)
		return (0);
	while (i <= max - min)
		arr[i++] = min++;
	return (arr);
}
