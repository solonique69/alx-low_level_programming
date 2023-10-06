#include <stdio.h>

/**
 * main - Entry point
 * Description; A C-program that outputs lower case letters
 * Return: Always 0 (Success)
 */

int main(void)
{
	char Lc;

	for (Lc = 'a'; Lc <= 'z'; Lc++)
	{
		if (Lc != 'e' && Lc != 'q')
		{
			putchar(Lc);
		}
	}

	putchar('\n');

	return (0);
}
