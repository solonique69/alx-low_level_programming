#include "lists.h"

/**
 * list_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t list_len(const list_t *h)
{
	const list_t *container;
	unsigned int counter = 0;

	container = h;
	while (container)
	{
		counter++;
		container = container->next;
	}
	return (counter);
}
