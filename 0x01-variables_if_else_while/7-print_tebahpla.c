#include <stdio.h>

/**
 * main - Entry point
 * Description; A C-program that outputs lower case letters
 * Return: Always 0 (Success)
 */

int main(void)
{
	char Lc; /*Lc means Lowercase*/

	for (Lc = 'z'; Lc >= 'a'; Lc--)
	{
		putchar(Lc);
	}

	putchar('\n');

	return (0);
}
