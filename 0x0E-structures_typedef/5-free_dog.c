#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - frees the memory of dog
 * @d: the dog structure
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->age);
	free(d->owner);

	free(d);
}
