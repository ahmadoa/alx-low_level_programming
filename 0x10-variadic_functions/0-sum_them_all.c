#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all of the functions args
 * @n: number of args
 * @...: anonymous variables
 * Return: sum of args
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;

	if (n == 0)
		return (0);

	va_list argsPtr;

	va_start(argsPtr, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(argsPtr, int);
	}

	va_end(argsPtr);

	return (sum);
}
