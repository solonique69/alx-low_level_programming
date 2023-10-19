#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: First number as a string
 * @n2: Second number as a string
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 * Return: Pointer to the result,
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = _strlen(n1) - 1;
	int j = _strlen(n2) - 1;
	int k = size_r - 2;

	r[size_r - 1] = '\0';

	int carry = 0;

	while (i >= 0 || j >= 0 || carry)
	{
		int sum = carry;

		if (i >= 0)
			sum += n1[i] - '0';

		if (j >= 0)
			sum += n2[j] - '0';

		carry = sum / 10;
		r[k] = (sum % 10) + '0';

		i--;
		j--;
		k--;
	}
	if (k < 0 && (i >= 0 || j >= 0 || carry))
		return (0);

	return (r + k + 1);
}
