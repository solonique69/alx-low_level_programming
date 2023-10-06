#include <stdio.h>

/**
 * main - Entry point
 * Description; A C-program that outputs lowercase and uppercase letters
 * Return: Always 0 (Success)
 */

int main(void)
{
	char Lc;  /*Lc - Lowercase*/
	char Uc; /*Uc - Uppercase*/

	for (Lc = 'a'; Lc <= 'z'; Lc++)
	{
		putchar(Lc);
	}

	for (Uc = 'A'; Uc <= 'Z'; Uc++)
	{
		putchar(Uc);
	}

	putchar('\n');

	return (0);
}
