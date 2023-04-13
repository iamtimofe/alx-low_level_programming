#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - creates a 2d array using malloc
 * @width: 2d array width
 * @height: 2d array height
 * Return: Returns 2d array
 */
int **alloc_grid(int width, int height)
{
	int **grid = NULL;
	int i, j;

	grid = malloc(sizeof(*grid) * height);

	if (width == 0 || height == 0 || grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(**grid) * width);
		if (grid[i] == NULL)
		{
			while (i--)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
