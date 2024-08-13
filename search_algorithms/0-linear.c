#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 *                 using the linear search algorithm
 *
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: the first index where the value is located, or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;

    if (!array)
        return (-1);

    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }
    return (-1);
}
