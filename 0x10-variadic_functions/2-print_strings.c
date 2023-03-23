#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings given in args
 * @seperator: string printed between strings
 * @n: number of args
 * @...: passed anonymous args
 * Return: void
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list strPtr;
	unsigned int i;
	char *str;

	va_start(strPtr, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strPtr, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}
	printf("\n");

	va_end(strPtr);
}
