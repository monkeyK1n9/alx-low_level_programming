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
		return (NULL);

	if (d->name != NULL)
		free(d->name);

	if (d->age > 0)
		free(d->age);

	if (d->owner != NULL)
		free(d->owner);

	free(d);
}
