#include "main.h"

/**
 * leet - encodes a string to 1337
 * @s: string to encode
 * Return: pointer to encoded string
 */

char *leet(char *s)
{
	char lower[5] = "aeotl";
	char upper[5] = "AEOTL";
	int num[5] = {4, 3, 0, 7, 1};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == lower[j] || s[i] == upper[j])
			{
				*(s + i) = num[j];
			}
		}
	}
	return (s);
}
