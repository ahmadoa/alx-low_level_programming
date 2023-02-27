#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string input
 */

void puts2(char *str)
{
	int i;
	int size = 0;
	char *temp = str;
	int t = 0;

	while (*temp != '\0')
	{
		size++;
		temp++;
	}
	t = size - 1;
	for (i = 0; i <= t; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
