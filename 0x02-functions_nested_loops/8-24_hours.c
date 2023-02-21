#include "main.h"

/**
 * jack_bauer - runs a 24 hours clock
 */

void jack_bauer(void)
{
	int min;
	int hours;

	for (hours = 0; hours <= 23; hours++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
