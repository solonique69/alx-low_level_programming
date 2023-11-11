#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of paramters.
 * @n: paramters passed to the function.
 * @...: set of paramters to calculate sum.
 * Return: Always 0 If n == 0
 * Else - the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, sum;/*i is position of parameter*/

	sum = 0;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(nums, int);
	}

	va_end(nums);

	return (sum);
}
