#include "main.h"

/**
 * print_line - prints a line
 *
 * @n: number of _
 * Return: a line of n _ characters
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; ++i)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
