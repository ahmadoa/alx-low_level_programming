#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 * Return: return 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int last = n % 10;

	if (last > 5)
	{
		printf("Last digit of %d ",n," is %d ",last," and is greater than 5\n");
	}
	else if (last == 0)
	{
		printf("Last digit of %d ",n," is %d ",last," and is 0\n");
	}
	else if (last < 6)
	{
		printf("Last digit of %d ",n," is %d ",last," and is less than 6 and not 0\n");
	}

	return (0);
}
