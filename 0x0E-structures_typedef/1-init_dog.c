#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to a struct dog variable
 * @name: name of the dog
 * @age: its age
 * @owner: its owner
 *
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		(*d).age = age;
		d->owner = owner;
	}
}
