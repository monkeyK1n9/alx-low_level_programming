#include "main.h"

/**
 * _strncpy - function to copy a string into another string
 * @dest: destination string
 * @src: string to copy from
 * @n: number of characters to copy
 * Return: pointer to the dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[i++])
		j++;

	for (i = 0; src[i] && i < n; i++)
		*(dest + i) = *(src + i);

	for (i = j; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
