#include "main.h"

/**
 * print_triangle - print triangle with # elements
 * @size: size of triangle
 * Return: # elements to form triangle
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; ++i)
		{
			for (j = 1; j < (i + 2) / 2; ++j)
			{
				_putchar(' ');
			}
			for (k = 1; k < (i + 2) / 2; ++k)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
