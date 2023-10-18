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
	int i, j, k;
	int sum, num1, num2;

	int len1 = _strlen(n1);
	int len2 = _strlen(n2);

	if (size_r <= len1 || size_r <= len2)
		return (0);

	for (i = 0; i < size_r; i++)
		r[i] = '\0';

	i = len1 - 1;
	j = len2 - 1;
	k = size_r - 2;

	while (i >= 0 || j >= 0 || carry > 0)
	{
		num1 = (i >= 0) ? n1[i] - '0' : 0;
		num2 = (j >= 0) ? n2[j] - '0' : 0;
		sum = num1 + num2 + carry;
		carry = sum / 10;
		sum = sum % 10;
		r[k] = sum + '0';
		i--;
		j--;
		k--;
	}

	return (r + k + 1);
}
