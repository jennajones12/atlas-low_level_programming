#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array using the linear search algorithm.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The index of the first occurrence of the value, or -1 if not found.
 */
int linear_search(int *array, size_t size, int value)
{
    size_t idx;

    if (array == NULL)
        return (-1);

    for (idx = 0; idx < size; idx++)
    {
        printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
        if (array[idx] == value)
            return ((int)idx);
    }
    return (-1);
}
