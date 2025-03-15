#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 *free_grid - do things
 *@grid: The grid to free
 *@height: Number of rows in the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
