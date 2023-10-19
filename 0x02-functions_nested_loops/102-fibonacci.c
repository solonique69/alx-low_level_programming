#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int counter;
	int countto = 50;
	long next;
	long a = 0;
	long b = 1;

	for (counter = 1; counter < countto; counter++)
	{
		printf("%li", a);

		if (counter < countto - 1)
		{
			printf(", ");
		}


		next = a + b;
		a = b;
		b = next;
	}

	printf("\n");

	return (0);
}
