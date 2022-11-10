#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array of specific size
 * and initialises it
 * @size: size of array
 * @c: initialised character
 * Return: returns a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
