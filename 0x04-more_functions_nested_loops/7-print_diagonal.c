#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: Number of times the character '\' should be printed
 */
void print_diagonal(int n)
{
	int spaces = 0;
	int slashes = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (slashes < n)
	{
		spaces = 0;

		while (spaces < slashes)
		{
			_putchar(' ');
			spaces++;
		}
			_putchar('\\');
			_putchar('\n');
			slashes++;
	}
}

