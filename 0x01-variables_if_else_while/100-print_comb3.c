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
	int Jade_i; /*Counter*/

	Jade_i = 0;

	for (FDt = 0; FDt <= 9; FDt++)
	{
		for (LDt = FDt + 1; LDt <= 9; LDt++)
		{
			if (Jade_i > 0)
			{
				putchar(',');
				putchar(' ');
			}

			putchar(FDt + '0');
			putchar(LDt + '0');
			Jade_i = 1;

		}
	}

	putchar('\n');

	return (0);
}
