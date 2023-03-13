#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - returns pointer to a two dimensional array
 * @width: width of array
 * @height: height of array
 * Return: the array pointer, NULL if width or height is 0
 */

int **alloc_grid(int width, int height)
{
	int **twodim;
	int x, y;

	if (height <= 0 || width <= 0)
		return (NULL);

	twodim = malloc(sizeof(int) * width);

	if (twodim == NULL)
		return (NULL);

	for (x = 0; x < width; y++)
		twodim[x] = malloc(sizeof(int) * height);

	if (twodim[x] == NULL)
	{
		for (; x >= 0; x--)
			free(twodim[x]);
		free(twodim);
		return (NULL);
	}

	for (x = 0; x < width; x++)
	{
		for (y = 0; y < height; y++)
			twodim[x][y] = 0;
	}
	return (twodim);

}
