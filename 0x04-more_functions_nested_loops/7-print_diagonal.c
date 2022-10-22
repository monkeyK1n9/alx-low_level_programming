#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: number of diagonal ticks
 * Return: line
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 1; j <= n; ++j)
		{

			for (i = 1; i < j; ++i)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
