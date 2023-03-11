#include <stdio.h>
#include "main.h"

/**
 * main - prints all args passed to the program
 * @argc: number of passed arguments
 * @argv: array of passed arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
