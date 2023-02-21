#include "main.h"

/**
 * print_last_digit - prints out last digit of a number
 * @n: int we are going to use
 * Return: returns 0 always
 */

int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
	{
		ld += -1;
	}

	_putchar(ld + '0');
	return (0);
}
