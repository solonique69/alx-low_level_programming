#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int counter;
	int fiboNum = 50;
	long a = 1;
	long b = 2;
	long next;

	printf("%li, %li", a, b);

	for (counter = 3; counter <= fiboNum; counter++)
	{
		next = a + b;

		printf(", %li", next);

		a = b;
		b = next;
	}

	printf("\n");

	return (0);
}
