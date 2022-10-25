#include "main.h"

/**
 * _strlen - computes the length of a string
 *
 * @s: string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i, j;

	i = 0;
	j = 0;
	while (!(*(s + i) == '\0'))
	{
		++j;
		++i;
	}

	return (j);
}
