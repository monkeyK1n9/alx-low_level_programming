#include "main.h"

/**
 * _strcat - function to concatenate two strings
 * @dest: start string to
 * @src: second string to add to dest
 * Return: returns pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j, k;

	i = 0;
	j = 0;

	while (!(*(dest + i) == '\0'))
	{
		++i;
	}
	while (!(*(src + j) == '\0'))
	{
		++j;
	}

	for (k = i; k <= i + j; ++k)
	{
		*(dest + k) = *(src + k - i);
	}
	return (dest);
}
