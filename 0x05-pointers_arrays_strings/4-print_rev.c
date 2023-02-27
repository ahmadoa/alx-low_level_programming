#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string input
 */

void print_rev(char *s)
{
	int i;
	int size = 0;

	while (*s != '\0')
	{
		size++;
		s++;
	}

	for (i = size - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
