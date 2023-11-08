#include "function_pointers.h"

/**
 * array_iterator - executes function on each element of an array
 * @array: the array to iterated
 * @size: array size
 * @action: the function
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!(array && size && action))
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
