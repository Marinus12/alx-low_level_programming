#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array
 * using Jump algorithm
 * @array: Pointer to the first element of the array to search in
 * @value: Number to search for
 *
 * Return: Index where value is located or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
        size_t i, jump, step;

        if (array == NULL || size == 0)
            return (-1);
        step = sqrt(size);
        for (i = jump = 0; jump < size && array[jump] < value;)
        {
            printf("Value checked array[%ld] = [%ld]\n", jump, array[jump]);
            i = jump;
            jump += step;
        }
        printf("Value found between indexes [%ld] and [%ld]\n", i, jump);
        jump = jump < size - 1 ? jump : size - 1;
        while (i < jump && array[i] < value)
        {
            printf("Value checked array[%ld] [%d]\n", i, array[i]);
            i++;
        }
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);

        return (array[i] == value ? (int)i : -1);
}
