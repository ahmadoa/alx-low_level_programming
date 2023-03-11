#include "main.h"

/**
 * _strncpy - copies string pointed to by src to dest
 * @dest: where src is to be copied
 * @src: string input to be copied
 * @n: number of characters to be copied from source
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
