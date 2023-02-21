#include "main.h"

/**
 * main - prints _putchar followed by a new line
 * Return: 0 (success)
 */

int main(void)
{
	char str[] = "_putchar";
	int len_in_bytes = sizeof(str);
	int length = len_in_bytes / sizeof(str[0]);
	int i;

	for (i = 0; i <= length - 2; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

	return (0);
}
