#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table
 * @n: how many tables are to be print
 */

void print_times_table(int n)
{
	int num1, num2, prod;

	if (n <= 15 && n > 0)
	{
		for (num1 = 0; num1 <= n; num1++)
		{
			printf("0");
			for (num2 = 1; num2 <= n; num2++)
			{
				prod = num1 * num2;

				if (prod <= 9)
				{
					printf(",   %d", prod);
				}
				else if (prod >= 100)
				{
					printf(", %d", prod);
				}
				else if (prod >= 10 && prod <= 99)
				{
					printf(",  %d", prod);
				}
			}
			printf("\n");
		}
	}
	else if (n == 0)
	{
		printf("%d\n",n);
	}
}
