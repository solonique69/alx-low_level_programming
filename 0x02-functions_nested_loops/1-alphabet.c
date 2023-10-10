#include "main.h"

/**
 * print_alphabet - Entry point
 * Description; A C-function that outputs lower case letters
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char Xn;

	for (Xn = 'a'; Xn <= 'z'; Xn++)
	{
		_putchar(Xn);
	}

	_putchar('\n');
}
