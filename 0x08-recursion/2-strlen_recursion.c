#include "main.h"

/**
 * _strlen_recursion - print the length of a string
 * @s: string to measure length
 * Return: length of the strength
 */

int _strlen_recursion(char *s)
{
	int i;

	if (i)
	{
		i++;
	}
	else
	{
		i = 0;
	}

	if (*s != '\0')
	{
		_strlen_recursion(*(s + 1));
	}
	else
	{
		return (i);
	}

}
