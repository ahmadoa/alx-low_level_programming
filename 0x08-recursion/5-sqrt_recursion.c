#include "main.h"

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: integer input
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (natural_sqrt_recursion(n, 0));
}

/**
 * natural_sqrt_recursion - find natural square root of number
 * @n: integer input to calculate
 * @i: iterator
 * Return: result of square root of n
 */

int natural_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (natural_sqrt_recursion(n, i + 1));
}
