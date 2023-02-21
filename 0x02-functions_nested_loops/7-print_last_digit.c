#include "main.h"

/**
 * print_last_digit - prints out last digit of a number
 * @n: int we are going to use
 * Return: returns the last digit
 */

int print_last_digit(int n)
{
	int ld = n % 10;
	int c;

	if (ld < 0)
	{
		c = -ld;
		return (c);
	}
	else
	{
		return (ld);
	}
}
