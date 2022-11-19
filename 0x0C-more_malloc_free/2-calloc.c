#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates space to an array of specific size
 * @nmemb: number of elements in array
 * @size: size of array to allocate
 * Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	memset(arr, 0, nmemb * size);

	return (arr);
}
