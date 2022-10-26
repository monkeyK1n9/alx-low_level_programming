#include "main.h"

/**
 * _strncat - concatenate n characters of a string to another
 * @dest: first string to be added
 * @src: second string to take n-character from
 * @n: number of characters
 * Return: returns the pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (!(*(dest + i) == '\0'))
	{
		++i;
	}

	for (j = i; j <= i + n - 1; ++j)
	{
		*(dest + j) = *(src + j - i);
	}
	return (dest);
}
