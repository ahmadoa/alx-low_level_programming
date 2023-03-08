#include "main.h"

/**
 * prime_check - checks if a number is prime
 * @n: number to check
 * @i: iterator
 * Return: 1 if n is prime, 0 if not
 */

int prime_check(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime_check(n, i - 1));
}

/**
 * is_prime_number - check if an integer is prime or not
 * @n: integer input to check
 * Return: 1 if n is prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
