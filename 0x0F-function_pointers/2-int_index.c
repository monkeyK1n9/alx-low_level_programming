#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - searches for an integer in array
 * @array: array to look into
 * @size: size of the array
 * @cmp: compare function to look for array
 * Return: returns index of element
 * 	if no element matches, return -1,
 * 	if size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 0)
		{
			return (i);
			break;
		}
	}

	return (-1);
}
