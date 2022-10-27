#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: difference between the strings
 */

int _strcmp(char *s1, char *s2)
{
	int i, m;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			m = s1[i] - s2[i];
			break;
		}
		else
		{
			m = 0;
			break;
		}
	}
	return (m);
}
