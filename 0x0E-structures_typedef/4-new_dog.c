#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - initializes the variable of struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: a dog_t of a new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;
	char *copyName, *copyOwner;
	dog_t *d;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (name == NULL || age <=0 || owner == NULL)
	{
		free(d);
		return (NULL);
	}

	while (name[i] != '\0')
		++i;
	while (owner[j] != '\0')
		++j;

	copyName = malloc((sizeof(char) * i) + 1);
	copyOwner = malloc((sizeof(char) * j) + 1);
	
	if (copyName == NULL || copyOwner == NULL)
		return (NULL);

	d->name = copyName;
	d->age = age;
	d->owner = copyOwner;

	return (d);
}
