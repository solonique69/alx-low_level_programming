#include "main.h"

/**
 * main - Entry point
 * Description; A C-function that outputs lower case letters
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char Xn;

	for (Xn = 'a'; Xn <= 'z'; Xn++)
	{
		putchar(Xn);
	}

	putchar('\n');
}
