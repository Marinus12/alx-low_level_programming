#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array
 *                      of integers using exponential search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t bound = 1, min;

    if (array == NULL || size == 0)
        return (-1);

    while (bound < size && array[bound] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }

    min = (bound / 2) < (size - 1) ? (bound / 2) : (size - 1);
    printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, min);
    return (binary_search(array, bound / 2, min, value));
}

/**
 * binary_search - Searches for a value in a sorted array
 *                 of integers using binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @start: Starting index in array
 * @end: Ending index in array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found
 */
int binary_search(int *array, size_t start, size_t end, int value)
{
    size_t mid, i;

    while (start <= end)
    {
        printf("Searching in array: ");
        for (i = start; i < end; i++)
            printf("%d, ", array[i]);
        printf("%d\n", array[i]);

        mid = (start + end) / 2;
        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
            start = mid + 1;
        else
            end = mid - 1;
    }

    return (-1);
}
