#include "main.h"

/**
 * print_numbers - Printsnumbers
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
		i++;
	}

	_putchar('\n');
}
