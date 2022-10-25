#include "main.h"

/**
 * _strcpy - copies a string value into another
 * @dest: the string into which the string is copied to
 * @src: source string to be copied
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (!(*(src + i) == '\0'))
	{
		++i;
	}

	for (j = 0; j <= i; ++j)
	{
		*(dest + j) = *(src + j);
	}
	return (dest);
}
