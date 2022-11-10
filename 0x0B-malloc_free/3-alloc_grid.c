#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - gives pointer to 2D array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to 2D array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (height <= 0 || width <= 0)
		return (NULL);

	arr = malloc(sizeof(int) * width * height);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = mallow(sizeof(int) * width);
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
