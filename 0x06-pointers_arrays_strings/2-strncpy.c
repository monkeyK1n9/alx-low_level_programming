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
	int i;

	i = 0;
	for (i = 0; i <= n - 1; i++)
	{
		*(dest + i) = *(src + i);
		while (i < n)
			*(dest + i + 1) = '\0';
		if (*(src + i) == '\0')
			i = n;
	}
	return (dest);
}
