#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - locates the first occurrence of s of any of
 * the bytes in the string accept
 * @s: string to investigate
 * @accept: the string to use to test
 * Return: pointer to the byte in s that matches one of the
 * bytes in accept or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*(accept + j) == *(s + i))
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
