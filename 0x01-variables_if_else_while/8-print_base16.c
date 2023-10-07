#include <stdio.h>

/**
 * main - Entry point
 * Description; A C-program that outputs all Hexidecimal numberss
 * Return: Always 0 (Success)
 */

int main(void)
{
	char Hn;  /*Lc - Hex numbers*/
	char Lc; /*Lc - Lowercase*/

	for (Lc = '0'; Lc <= '9'; Lc++)
	{
		putchar(Hn);
	}

	for (Lc = 'a'; Lc <= 'f'; Lc++)
	{
		putchar(Lc);
	}

	putchar('\n');

	return (0);
}
