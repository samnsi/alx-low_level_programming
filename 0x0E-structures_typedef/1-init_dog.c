#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initailise the information of a dog
 * @name: char
 * @age: float
 * @owner: char
 * @d: Pointer pointing to the infomation of the dog
 *
 * Return - 0.
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
