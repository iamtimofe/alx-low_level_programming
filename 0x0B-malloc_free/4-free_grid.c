#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2d array grid
 * @grid: 2d array grid
 * @height: height of grid
 * Return: Returns void
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
