#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - initializes the variable of struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: nothing
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	else
		return (NULL);
}
