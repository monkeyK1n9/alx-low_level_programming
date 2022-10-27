#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: number of elements in the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;
	int tmp = a[0];

	if (n <= 0)
	{
	}
	else
	{
		for (i = 0; i <= n - 1; i++)
		{
			n--;
			tmp = a[i];
			*(a + i) = *(a + n);
			*(a + n) = tmp;
		}
	}
}
