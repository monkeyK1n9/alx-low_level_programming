#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: difference between the strings
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0; j = 0, k = 0, l = 0, m = 0;

	while (s1[i++])
		j++;
	while (s2[k++])
		l++;

	if (j < l)
		j = l;

	for (i = 0; i < j; i++)
	{
		if (s1[i] == '\0' || s2[i] == '\0')
		{
			m = s1[i] - s2[i];
			break;
		}
		else if (s1[i] != s2[i])
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
