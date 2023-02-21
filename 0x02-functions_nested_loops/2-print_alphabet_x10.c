#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabets
 */

void print_alphabet_x10(void)
{
	int i;
	int j;
	char str[] = "_putchar";
	int len_in_bytes = sizeof(str);
	int length = len_in_bytes / sizeof(str[0]);

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= length - 2; j++)
		{
			_putchar(str[j]);
		}
		_putchar('\n');
	}
}
