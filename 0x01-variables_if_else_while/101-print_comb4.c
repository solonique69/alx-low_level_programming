#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int H;
	int T;
	int U;

	for (H = 0; H < 10; H++)
	{
		for (T = H + 1; T < 10; T++)
		{
			for (U = T + 1; U < 10; U++)
			{
				putchar(H + '0');
				putchar(T + '0');
				putchar(U + '0');

				if (H != 7 || T != 8 || U != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
