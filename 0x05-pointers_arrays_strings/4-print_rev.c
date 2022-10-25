#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string to reverse
 * Return: nothing
 */

void print_rev(char *s)
{
	int i, j, k;

	i = 0;
	j = 0;
	while (!(*(s + i) == '\0'))
	{
		++j;
		++i;
	}

	for (k = j - 1; k <= 0; ++k)
	{
		_putchar(*(s + k));
	}
	_putchar('\n');
}
