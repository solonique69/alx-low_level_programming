#include <stdlib.h>
#include <stdtime.h>
#include <stdio.h>

/**
	*Main - Entry point
	*Return: Always 0 (Success)
	*/

int main(void)
{
	int n;
	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{

		printf("%i is positive\n", n);

	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);	
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);

	}

	return (0);

}
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
	*Main - Entry point
	*Return: Always 0 (Success)
	*/

int main(void)
{
	int n;
	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{

		printf("%i is positive\n", n);

	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);

	}

	return (0);

}
