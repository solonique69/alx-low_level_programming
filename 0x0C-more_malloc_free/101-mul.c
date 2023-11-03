#include <stdio.h>
#include <stdlib.h>

/**
 * is_numeric - Check if a string contains only digits
 * @str: The input string to check
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */

int is_numeric(const char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (0); /* Not a digit */
		}

		str++;
	}

	return (1); /* All characters are digits */
}

/**
 * multiply - Multiply two positive numbers
 * @num1: The first positive number
 * @num2: The second positive number
 *
 * Return: The product of num1 and num2
 */

long long multiply(long long num1, long long num2)
{
	return (num1 * num2);
}

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!is_numeric(argv[1]) || !is_numeric(argv[2]))
	{
		printf("Error\n");
		return (98);
	}
	long long num1 = atoll(argv[1]);
	long long num2 = atoll(argv[2]);

	if (num1 <= 0 || num2 <= 0)
	{
		printf("Error\n");
		return (98);
	}

	long long result = multiply(num1, num2);

	printf("%lld\n", result);

	return (0);
}
