#include <stdio.h>

/**
 * main - Entry point
 * Description; A C-program that outputs all Hexidecimal numberss
 * Return: Always 0 (Success)
 */

int main(void)
{
	int Hn;  /*Lc - Hex numbers*/
	char Lc; /*Lc - Lowercase*/

	for (Hn = '0'; Hn <= '9'; Hn++)
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
