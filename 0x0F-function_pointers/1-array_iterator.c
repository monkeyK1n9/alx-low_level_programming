#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - function that iterates over an array with a function
 * @array: the array to iterate over
 * @size: size of the array
 * @action: the function to execute upon iteration
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL)
		return;

	i = 0;
	while (array[i] != '\0')
		i++;

	if (size == NULL || size != i || action == NULL)
		return;

	for (i = 0; array[i] != '\0'; i++)
		action(array[i]);
}
