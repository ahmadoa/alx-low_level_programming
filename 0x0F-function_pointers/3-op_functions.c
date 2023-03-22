#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - sums a and b
 * @a: first integer
 * @b: second integer
 * Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference between a and b
 * @a: first integer
 * @b: second integer
 * Return: result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a and b
 * @a: first integer
 * @b: second integer
 * Return: result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the result of dividing a by b
 * @a: first integer
 * @b: second integer
 * Return: result
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the ramainder of dividing a by b
 * @a: first integer
 * @b: second integer
 * Return: result
 */

int op_mod(int a, int b)
{
	return (a % b);
}
