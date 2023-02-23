#include "main.h"

/**
 * print_triangle - prints a triangle with a certain size
 * @size: the size to of triangle
 */

void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j >= i; j--)
		{
			_putchar(' ');
		}

		for (k = 0; k <= i + 1; k++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
