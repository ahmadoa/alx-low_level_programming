#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string input
 */

void puts_half(char *str)
{
	int i, n, size;

	size = 0;

	for (i = 0; str[i] != '\0'; i++)
		size++;

	n = size / 2;

	if ((size % 2) != 0)
		n = ((size + 1) / 2);

	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
