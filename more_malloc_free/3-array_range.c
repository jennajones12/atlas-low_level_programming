#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *
 *
 */
int *array_range(int min, int max);
void fill_array(int *arr, int min, int max);

int *array_range(int min, int max)
{
	int *new_array;
	int diff, i;

	if (min > max)
		return (NULL);

	diff = max - min;
	new_array = malloc((sizeof(int) * diff + 1));
	if (new_array == NULL)
		return (NULL);

	for (i = 0; i <= diff; i++)
		new_array[i] = min++;

	return (new_array);
}
