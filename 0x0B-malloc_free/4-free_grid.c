#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid from the heap.
 * @grid: 2D array.
 * @height: number of rows.
 * Return: void.
 */
void free_grid(int **grid, int height)
{
	int p;

	if (grid == NULL || height == 0)
		return;

	for (p = 0; p < height; p++)
		free(grid[p]);

	free(grid);
}
