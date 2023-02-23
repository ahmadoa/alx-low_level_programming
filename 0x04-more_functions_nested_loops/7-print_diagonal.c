#include "main.h"

/**
 * print_diagonal - prints a diagonal line on the terminal
 * @n: how many \ going to be print
 */

void print_diagonal(int n)
{
	int i, j;
	char s = ' ';

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			j = 0;
			while (j <= i)
			{
				_putchar(s);
				j++;
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
