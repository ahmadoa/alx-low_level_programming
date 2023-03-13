#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all args of program
 * @ac: number of passed args
 * @av: passed args
 * Return: pointer to new string, NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, size;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			size++;
	}

	size += ac;

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}

		if (str[k] == '\0')
			str[k++] = '\n';
	}

	return (str);
}
