#include "main.h"

/**
 * print_numbers - Prints numbers
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int i;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}

	_putchar('\n');
}
