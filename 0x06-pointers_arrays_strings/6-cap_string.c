#include "main.h"

/**
 * cap_string - capitalizes a string
 * @s: string to be capitalized
 * Return: returns a pointer to the character changed
 */

char *cap_string(char *s)
{
	char lower[27] = "abcdefghijklmnopqrstuvwxyz";
	char upper[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char separator[12] = {',', ';', '.', '?', '"',
		'(', ')', '{', '}', ' ', '\n', '\t'};
	int i, j, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 27; j++)
		{
			if (lower[j] == s[0] && i == 0)
			{
				*s = upper[j];
			}
		}

		for (k = 0; k < 12; k++)
		{
			if (s[i] == separator[k])
			{
				for (j = 0; j < 27; j++)
				{
					if (lower[j] == s[i + 1])
					{
						*(s + i + 1) = upper[j];
					}
				}
			}
		}
	}

	return (s);
}
