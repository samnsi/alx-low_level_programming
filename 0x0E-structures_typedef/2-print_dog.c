#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - A function that prints a struct dog in a programme
 * @d: Information of the dog
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((*d).name == NULL)
		printf("nil\n");
	else
		printf("Name: %s\n", d->name);
	if ((*d).age < 0)
		printf("nil\n");
	else
		printf("Age: %f\n", d->age);
	if ((*d).owner == NULL)
		printf("nil\n");
	else
		printf("Owner: %s\n", d->owner);
}
