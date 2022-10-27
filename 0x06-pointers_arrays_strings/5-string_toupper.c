#include "main.h"

/**
 * string_toupper - converts a string to uppercase
 * @s: string to be converted
 * Return: character string in uppercase
 */

char *string_toupper(char *s)
{
	char lower[27] = "abcdefghijklmnopqrstuvwxyz";
	char upper[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 27; j++)
		{
			if (s[i] == lower[j])
			{
				*(s + i) = upper[j];
			}
		}
	}
	return (s);
}
