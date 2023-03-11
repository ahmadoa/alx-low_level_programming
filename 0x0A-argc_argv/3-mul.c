#include <stdio.h>
#include "main.h"

/**
 * convertChar - converts char argv to int
 * @s: argument
 * Return: the char after conversion (int)
 */

int convertChar(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while(s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (n);
}

/**
 * main - prints the result of multiplying two numbers
 * @argc: number of passed args
 * @argv: array of passed args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int res, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = convertChar(argv[1]);
	num2 = convertChar(argv[2]);
	res = num1 * num2;

	printf("%d\n", res);

	return (0);
}
