#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: number of characters to take from s2
 * Return: pointer to the newly allocated space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = strlen(s1);
	if (n >= strlen(s2))
	{
		j = strlen(s2);
	}
	else
	{
		j = n;
	}

	arr = malloc(i + j + 1);

	if (arr == NULL)
		return (NULL);

	for (k = 0; s1 != '\0'; k++)
		arr[k] = s1[k];
	for (k = i; k < i + j + 1; k++)
		arr[k] = s2[k - i];

	arr[i + j] = '\0';
	return (arr);
}
