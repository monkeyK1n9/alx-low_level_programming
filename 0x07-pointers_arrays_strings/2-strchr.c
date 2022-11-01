#include "main.h"

/**
 * _strchr - locates a char in a string
 * @s: source string
 * @c: character to locate
 * Return: pointer to the first occurrence of c or NULL
 */

char *_strchr(char *s, char c)
{
	int i, m;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			m = i;
			return (s + m);
		}
		i++;
	}
	return (NULL);
}
