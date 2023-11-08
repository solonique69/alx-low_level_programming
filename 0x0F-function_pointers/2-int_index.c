#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: the array to be worked on
 * @size: the size of the array
 * @cmp: pointer to the function we're testing for
 *
 * Return: index of the first element for which cmp doesn't return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int cmpValue, i;

	if (!(array && cmp))
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		cmpValue = cmp(array[i]);
		if (cmpValue != 0)
			return (i);
	}
	return (-1);
}
