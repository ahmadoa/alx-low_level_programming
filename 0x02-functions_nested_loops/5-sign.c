#include "main.h"

/**
 * print_sign - checks the sign of an int
 * @n: the int to check
 * Return: 1 if it's positive, 0 if it's 0, -1 if it's negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
