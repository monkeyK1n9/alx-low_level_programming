#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string input
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, j;

	while (!(*(str + i) == 0))
	{
		++i;
	}

	for (j = i / 2; j <= i - 1; ++j)
	{
		_putchar(*(str + j));
	}
	_putchar('\n');
}
