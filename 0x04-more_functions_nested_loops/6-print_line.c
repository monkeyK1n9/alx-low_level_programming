#include "main.h"

/**
 * print_line - prints a line
 *
 * Return: a line of n _ characters
 */

void print_line(int n)
{
	char i;

	if (n <= 0);
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; ++i)
			_putchar('_');
		_putchar('\n');
	}
}
