#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: Argument parameter
 * Return: Returns nothing
 */

void print_binary(unsigned long int n)
{
	int BitPosx;
	int SetsBit;
	unsigned long int RSbit;

	SetsBit = 0;

	for (BitPosx = 63; BitPosx >= 0; BitPosx--)
	/*64 bit architecture assumed*/
	{
		RSbit = n >> BitPosx;

		if (RSbit & 1)
		{
			_putchar('1');
			SetsBit++;
		}
		else if (SetsBit)
		{
			_putchar('0');
		}
	}

	if (!SetsBit)
	{
		_putchar('0');
	}
}
