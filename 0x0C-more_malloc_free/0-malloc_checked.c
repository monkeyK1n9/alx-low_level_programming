#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocated memory using malloc
 * @b: size of memory to allocate
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *all;

	all = malloc(b);
	if (all == NULL)
		exit(98);
	return (all);
}
