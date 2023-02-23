#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14, 10 times
 */

void more_numbers(void)
{
	int i, j, k, o;

	for (o = 1; o <= 10; o++)
	{
		for (i = 0; i <= 14; i++)
		{
			j = i / 10;
			k = i % 10;

			if (j != 0)
				_putchar(j + '0');

			_putchar(k + '0');
		}
		_putchar('\n');
	}
}
