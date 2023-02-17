#include <stdio.h>

/**
 * main - Program that prints smallest combos of 2 numbers
 * Return: 0 (success)
 */

int main()
{
	int i = '0';
	int j = '0';

	for (i = 0; i <= 9; i++)
	{
		for(j = i; i <= 9; j++)
		{
			if (j = i; j <= 9; j++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
