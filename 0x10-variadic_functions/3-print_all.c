#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints whatever data is passed to function
 * @format: format of the data
 * @...: anonymous args
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list print;
	char *str, *sep = "";
	int i = 0;

	va_start(print, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(print, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(print, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(print, double));
					break;
				case 's':
					str = va_arg(print, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(print);
}
