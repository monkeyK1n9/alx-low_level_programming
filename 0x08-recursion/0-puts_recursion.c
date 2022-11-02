#include "main.h"

/**
 * _puts_recursion - prints a string followed by new line
 * @s: string to be printed
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	unsigned int i;

	i = 0;
	if (*s == '\0')
		_putchar('\n');

	_putchar(*s);
	_puts_recursion(s[i++]);
}
