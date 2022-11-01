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
	while (s[i++])
	{
		if (s[i] == c)
		{
			m = i;
			break;
			return (&(s[m]));
		}
	}
	return (NULL);
}
