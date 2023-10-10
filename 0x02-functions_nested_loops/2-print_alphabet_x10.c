#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description; A C-function that outputs lower case letters
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char Xn;
	int Jade_i = 0;

	while (Jade_i < 10)
	{
		for (Xn = 'a'; Xn <= 'z'; Xn++)
		{
			_putchar(Xn);
		}

		Jade_i++;
		_putchar('\n');
	}
}
