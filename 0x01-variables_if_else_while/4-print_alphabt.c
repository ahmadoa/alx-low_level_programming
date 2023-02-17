#include <stdio.h>

/**
 * main - Entry Point
 * Return: returns 0 (success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if(letter != 'q' &&  letter != 'e')
		{
			putchar(letter);
		}
	}
	
	return (0);
}
