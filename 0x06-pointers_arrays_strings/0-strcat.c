#include "main.h"

/**
 * _strcat - function to concatenate two strings
 * @dest: start string to
 * @src: second string to add to dest
 * Return: returns pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	char result;

	result = *dest + *src;
	*dest = result;

	return (dest);
}
