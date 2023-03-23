#ifndef _variadic_functions_h_
#define _variadic_functions_h_

#include <stdarg.h>

int _putchar(char ch);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *seperator, const unsigned int n, ...);
void print_strings(const char *seperator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
