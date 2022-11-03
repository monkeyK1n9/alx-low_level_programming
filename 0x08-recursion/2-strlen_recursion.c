#include "main.h"

/**
 * _strlen_recursion - print the length of a string
 * @s: string to measure length
 * Return: length of the strength
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
