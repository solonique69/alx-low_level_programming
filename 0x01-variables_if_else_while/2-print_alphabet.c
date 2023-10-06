#include <stdio.h>

/**
 * main - Entry point
 * Description; A C-program that outputs lower case letters
 * Return: Always 0 (Success)
 */

int main(void)
{
	char Xn;

	for (Xn = 'a'; Xn <= 'z'; Xn++)
	{
		putchar(Xn);
	}

	putchar('\n');

	return (0);
}
