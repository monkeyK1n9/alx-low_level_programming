#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string to reverse
 * Return: nothing
 */

void print_rev(char *s)
{
	int i, j;

	i = 0;
	j = 0;
	while (!(*(s + i) == '\0'))
	{
		++j;
		++i;
	}

	while (j >= 1)
	{
		_putchar(*(s + j));
		--j;
	}
}
