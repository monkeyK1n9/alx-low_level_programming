#include "main.h"

/**
 * _memset - function that fills the first n bytes of s by b
 * @s: memory area
 * @b: constant byte to repeat
 * @n: number of first bytes to repeat
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
		*(s + i) = b;

	return (s);
}
