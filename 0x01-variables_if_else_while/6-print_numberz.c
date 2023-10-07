#include <stdio.h>

/**
 * main - Entry point
 * Description; A C-program that counts single digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}

	putchar('\n');

	return (0);
}
