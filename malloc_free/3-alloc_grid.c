#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 */
int **alloc_grid(int width, int height)
{
	int **array, i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **)malloc(height * sizeof(int *));
	if (array == NULL)
		return (NULL);

	 for (; i < height; i++)
	 {
		 array[i] = (int *)malloc(width * sizeof(int));
		 if (array[i] == NULL)
			 return (NULL);
	 }

	 for (i = 0; i < height; i++)
		 for (; j < width; j++)
			 array[i][j] = 0;
	 return (array);
}
