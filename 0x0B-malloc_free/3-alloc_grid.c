#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: number of columns
 * @height: number of rows
 * Return: always 0
 */
int **alloc_grid(int width, int height)
{
	int c, d;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)  malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (c = 0; c < height; c++)
	{
		grid[c] = (int *) malloc(sizeof(int) * width);
		if (grid[c] == NULL)
		{
			free(grid);
			for (d = 0; d <= c; d++)
				free(grid[d]);
			return (NULL);
		}
	}

	for (c = 0; c < height; c++)
		for (d = 0; d < width; d++)
			grid[c][d] = 0;
	return (grid);
}
