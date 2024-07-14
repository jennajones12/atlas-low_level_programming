#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allocates mem for 2D array of ints and
 * initializes each element to 0.
 * @width: width of the 2D array
 * @height: height of the 2D array
 *
 * Return: pointer to newly allocated 2D array,
 * NULL if width or height is 0 or neg
 * or if memory allocation fails.
 */

int **alloc_grid(int width, int height)
{
	int **array, i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	for (; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);

		if (array[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
		for (; j < width; j++)
			array[i][j] = 0;
	return (array);
}
