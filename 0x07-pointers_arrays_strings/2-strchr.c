#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a char in a string
 * @s: source string
 * @c: character to locate
 * Return: pointer to the first occurrence of c or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);

	}
	return (NULL);
}
