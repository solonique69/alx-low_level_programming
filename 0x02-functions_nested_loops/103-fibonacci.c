#include <stdio.h>

/**
 * main - Entry point
 * Description: Computes the sum of even Fibonacci numbers
 * not exceeding 4,000,000.
 * Return: Alwyas 0 (Success)
 */

int main(void)
{
	int next, a = 1, b = 2, sum = 0;

	while (a <= 4000000)
	{
		if (a % 2 == 0)
		{
			sum += a;
		}

		next = a + b;
		a = b;
		b = next;
	}

	printf("%d\n", sum);

	return (0);
}
