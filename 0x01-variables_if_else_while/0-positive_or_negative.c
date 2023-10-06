#include <stdlib.h>
#include <time.h>
/*The header below will give access to printf*/
#include <stdio.h>

/**
 * main - Entry point
 *A program that outputs random numbers.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*Made use of a if else block*/

	printf("%d ", n);

	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n == 0)
	{
		printf("is zero\n");
	}
	else
	{
		printf("is negative\n");
	}

	return (0);
}
