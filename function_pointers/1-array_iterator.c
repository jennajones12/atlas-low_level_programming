#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes function given
 * @array: pointer to array
 * @size: array size
 * @action: pointer to function to use
 * Return: none
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
