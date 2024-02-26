#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: pointer to array
 * @size: array size
 * @cmp compares elements throw away
 * Return: index of first element which cmp function wont return 0
 * -1 if no elements match or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}

	return (-1);
}
