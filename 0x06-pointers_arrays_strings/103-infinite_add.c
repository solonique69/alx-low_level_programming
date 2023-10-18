#include "main.h"

/**
 * infinite_add - Add two numbers
 * @n1: First number as a string
 * @n2: Second number as a string
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 * Return: Pointer to the result, or 0 if the result cannot be stored
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int i = size_r - 1;
	int j = strlen(n1) - 1;
	int k = strlen(n2) - 1;

	while (j >= 0 || k >= 0)
	{
		int d1 = j >= 0 ? n1[j] - '0' : 0;
		int d2 = k >= 0 ? n2[k] - '0' : 0;
		int sum = d1 + d2 + carry;

		r[i] = sum % 10 + '0';
		carry = sum / 10;
		i--;
		j--;
		k--;
	}

	if (carry > 0)
	{
		if (i < 0)
		{
			return (0);
		}
		r[i] = carry + '0';
		i--;
	}

	r[i] = '\0';

	return (r);
}
