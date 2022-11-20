#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: the struct dog to print
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL && d->age != NULL && d->owner != NULL)
			printf("Name: (nil)\nAge: %d\nOwner: %s\n", d->age, d->owner);
		else if (d->name != NULL && d->age == NULL && d->owner != NULL)
			printf("Name: %s\nAge: (nil)\nOwner: %s\n", d->name, d->owner);
		else if (d->name != NULL && d->age != NULL && d->owner == NULL)
			printf("Name: %s\nAge: %d\nOwner: (nil)\n", d->name, d->age);
		else if (d->name == NULL && d->age == NULL)
			printf("Name: (nil)\nAge: (nil)\nOwner: %s\n", d->owner);
		else if (d->name == NULL && d->owner == NULL)
			printf("Name: (nil)\nAge: %d\nOwner: (nil)\n", d->age);
		else
			printf("Name: %s\nAge: (nil)\nOwner: (nil)\n", d->name);
	}
}
