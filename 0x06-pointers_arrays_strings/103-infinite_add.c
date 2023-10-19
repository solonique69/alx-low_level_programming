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
	int i = _strlen(n1) - 1;
	int j = _strlen(n2) - 1;
	int k = size_r - 2;

	r[size_r - 1] = '\0';

	while (i >= 0 || j >= 0 || carry)
	{
		int num1 = (i >= 0) ? n1[i] - '0' : 0;
		int num2 = (j >= 0) ? n2[j] - '0' : 0;
		int sum = num1 + num2 + carry;

		carry = sum / 10;
		sum %= 10;
		r[k] = sum + '0';

		i--;
		j--;
		k--;
	}

	return (k >= 0 ? r + k : 0);
}
