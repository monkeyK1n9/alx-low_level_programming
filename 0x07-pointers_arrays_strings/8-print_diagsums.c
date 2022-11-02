#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sums of the diagonals of
 * array of arrays
 * @a: array of arrays
 * @size: size of the array of arrays
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i, j, sumDiag1, sumDiag2;

	sumDiag1 = 0;
	sumDiag2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sumDiag1 += a[i][j];
			}

			if (j == size - 1 - i)
			{
				sumDiag2 += a[i][j];
			}
		}
	}

	printf("%d, %d", sumDiag1, sumDiag2);
}
