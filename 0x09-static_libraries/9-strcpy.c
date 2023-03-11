#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * to the buffer pointed to by dest
 * @dest: copy to
 * @src: copy from
 * Return: dest string
 */

char *_strcpy(char *dest, char *src)
{
	int size, i;

	size = 0;

	while (*(src + size) != '\0')
		size++;

	for (i = 0; i < size; i++)
		dest[i] = src[i];
	dest[size] = '\0';
	return (dest);
}
