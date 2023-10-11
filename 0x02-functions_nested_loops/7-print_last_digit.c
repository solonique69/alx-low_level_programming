#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @num: The number to extract the last digit from.
 * Return: The value of the last digit.
 */

int print_last_digit(int num)
{
	int zth;

	zth = num % 10;

	if (zth < 0)
	{
		zth *= -1;
	}

	_putchar('0' + zth);

	return (zth);
}
