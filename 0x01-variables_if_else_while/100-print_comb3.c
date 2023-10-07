#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int FDt; /*FirstDigit*/
	int LDt; /*LastDigit*/

	for (FDt = 0; FDt < 10; FDt++)
	{
		for (LDt = FDt + 1; LDt < 10; LDt++)
		{
			putchar(FDt + '0');
			putchar(FDt + '0');

			if (FDt != 8 || LDt != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
