#include "variadic_functions.c"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @seperator: the string to be printed between numbers
 * @n: number of args
 * @...: anonymous args
 * Return: void
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list argsPtr;
	unsigned int i;

	va_start(argsPtr, n);

	for (i = 0; i < n; i++)
	{
		if (seperator != NULL)
		{
			if (i == n - 1)
				printf("%d", va_arg(argsPtr, int));
			else
				printf("%d%c", va_arg(argsPtr, int), seperator);
		}
		else
			printf("%d", va_arg(argsPtr, int));
	}

	printf("\n");

	va_end(argsPtr);
}
