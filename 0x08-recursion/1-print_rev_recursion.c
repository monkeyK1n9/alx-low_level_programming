#include "main.h"

/**
 * print_rev_recursion - prints a string in reverse
 * @s: string to print
 * Return: returns nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(*(s - 1));
		_print_rev_recursion(&(*(s - 1)));
		return;
	}

	_print_rev_recursion(&(*(s + 1)));
}
