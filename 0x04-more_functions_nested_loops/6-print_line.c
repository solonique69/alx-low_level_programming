#include "main.h"

/**
 * print_line - Prints underscore t;ake a line
 * @n: number of times to print
 */

void print_line(int n)
{
	int count;

	count = 0;

	while (n > 0)
	{

		if (n <= 0)
		{
			_putchar('\n');
		}

		_putchar('_');
		count++
	}

	_putchar('\n');
}
