#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees memory from the alloc_grid
 * @grid: the grid with memory
 * @height: height of the grid
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
