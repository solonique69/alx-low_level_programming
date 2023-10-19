#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int counter;
	int countto = 50;
	long a = 1;
	long b = 2;
	int next;

	for (counter = 1; counter <= (countto / 2); counter++)
	{
		if (counter == countto)
		{
			printf("%li", a);
		}
		else
		{
			printf("%li, ", a);
		}

		next = a + b;
		a = b;
		b = next;
	}

	printf("\n");

	return (0);
}
