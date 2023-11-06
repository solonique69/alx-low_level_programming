#include "dog.h"
#include <stdlib.h> /*For specifying NULL*/
#include <stdio.h> /*For use of printf()*/

/**
 * print_dog - prints a structure
 * @d: holds address of structure
 * Description: a function that prints a struct dog
 * Prototype: void print_dog(struct dog *d);
 * If an element of d is NULL, print (nil) instead of this element.
 * (if name is NULL, print Name: (nil))
 * If d is NULL print nothing.
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)\n");
		}
		if (d->age >= 0)
		{
			printf("Age: %f\n", d->age);
		}
		else
		{
			printf("Age: (nil)\n");
		}

		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: (nil)\n");
		}
	}
}
