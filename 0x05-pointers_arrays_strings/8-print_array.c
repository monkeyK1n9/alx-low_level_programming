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
	int i, j;

	j = (int) sizeof(a);

	if (n >= j / 4)
		n = j / 4;
	else if (n < 0)
		n = 0;

	for (i = 0; i < n; ++i)
	{
		if (i <= n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}