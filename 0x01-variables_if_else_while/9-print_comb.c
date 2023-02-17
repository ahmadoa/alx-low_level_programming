#include <stdio.h>

/**
 * main - prints all combination of single digit numbers
 * Return: returns 0 (success)
 */

int main(void)
{
	int num = '0';

	while (num < '10')
	{
		putchar(num);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
