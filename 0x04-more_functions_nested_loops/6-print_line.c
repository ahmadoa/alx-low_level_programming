#include "main.h"

/**
 * print_line - draws a straight line in terminal
 * @n: number of _ that the line will contain
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
