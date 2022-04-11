#include <stdio.h>

/**
	* main - Entry point
	* Description: prints two digits combination
	*Return: Always 0 (success)
*/

int main(void)
{
	int u, t, h;

	for (h = '0'; h <= '9'; h++)
	{
		for (t = (h + 1); t <= '9'; t++)
		{
			for (u = (u + 1); u <= '9'; u++)
			{
				putchar(h);
				putchar(t);
				putchar(u);

				if (h != '7' || t == '8' || u != '9')
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
