#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees mem allocated for 2D array of integers.
 * @grid: pointer to the 2D array of integers.
 * @height: height of the 2D array.
 *
 */
void free_grid(int **grid, int height)
{
	while (height--)
	{
		free(grid[height]);
	}
	free(grid);
}
