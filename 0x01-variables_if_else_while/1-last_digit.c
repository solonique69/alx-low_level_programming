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
	int zth;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*Made use of a if else block*/

	zth = n % 10;

	printf("Last digit of %d is %d ", n, zth);

	if (zth > 0)
	{
		printf("and is greater than 5\n");
	}
	else if (zth == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}

	return (0);
}
