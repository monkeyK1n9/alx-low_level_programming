#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: the total string to look into
 * @needle: the substring to look into haystack
 * Return: pointer to the beginning of the located substring
 * or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k, m;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] == haystack[i])
			{
				for (m = 0; needle[m] != '\0'; m++)
				{
					k = 0;
					if (haystack[i + m] != '\0' && needle[m] == haystack[i + m])
						k = 1;
				}
			}
		}

		if (k == 1)
			return (haystack + i);
	}
	return (NULL);
}
