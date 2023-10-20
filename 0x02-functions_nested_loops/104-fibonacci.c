#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 * Return: Always 0
 */

int main(void)
{
	int n;
	unsigned long a = 1, b = 2, next;

	printf("%lu, %lu", a, b);

	for (n = 3; n <= 98; n++)
	{
		next = a + b;

		if (n < 98)
		{
			printf(", ");
		}

		printf("%lu", next);

		a = b;
		b = next;
	}
	printf("\n");

	return (0);
}
