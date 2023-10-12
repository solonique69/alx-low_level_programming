#include "main.h"

/**
 * print_numbers - Printsnumbers
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		-putchar(i + '0');
		i++;
	}

	-putchar('\n');
}
