#include <stdio.h>

/**
 * main - prints the name of the file it was compiler from
 * Return: 0 success
 */

int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
