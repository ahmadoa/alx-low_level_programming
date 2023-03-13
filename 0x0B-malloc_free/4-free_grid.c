#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees two dimensional array
 * @grid: two dimensional array
 * @height: height of grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
