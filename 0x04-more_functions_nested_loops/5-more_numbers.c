#include "main.h"

/**
 * more_numbers - prints numbers multiple times
 * prints line of digits 10 times
 */

void more_numbers(void)
{
	int n;
	int i;

	i = 0;

	while (i < 11)
	{
		for (n = 0; n <= 14; n++)
		{
			_putchar(n + '0');
		}

		i++
	}

	_putchar('\n');
}

