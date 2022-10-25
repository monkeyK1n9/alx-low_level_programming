#include "main.h"
#include <stdio.h>

/**
 * print_array - prints a given number of elements of an array
 * @a: the given array
 * @n: the number of elements to print
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		if (i <= n - 2)
			printf("%d, ", a[i]);
		else
			printf(", %d", a[i]);
	}
	printf("\n");
}
