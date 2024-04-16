#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - Searches for a value in an array of integers 
 * using Linear search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 * Return: The index where the value is located, -1 if not found or array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", (unsigned long)i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
