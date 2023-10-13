#include "main.h"

/**
 * print_line - Prints underscore t;ake a line
 * @n: number of times to print
 */

void print_line(int n)
{
	int counter;

	counter = 0;

	while (counter < n)
	{
		_putchar('_');
		counter++;
	}

	_putchar('\n');
}
