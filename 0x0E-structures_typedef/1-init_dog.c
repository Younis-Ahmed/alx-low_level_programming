#include "dog.h"

/**
 * init_dog - function to initalize variable with type struct dog
 * @d: pointer to struct dog
 * @name: store to name
 * @age: store to age
 * @owner: stgore to owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
