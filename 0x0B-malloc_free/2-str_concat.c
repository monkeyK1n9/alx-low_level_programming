#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the newly allocated space
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *arr;

	i = 0;
	j = 0;
	while (s1[i])
		++i;
	while (s2[j])
		++j;

	arr = malloc((sizeof(char) * i) + (sizeof(char) * j) + 1);
	if (arr == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		arr[k] = s1[k];
	for (k = i; k < i + j; k++)
		arr[k] = s2[k - i];
	arr[i + j] = '\0';

	return (arr);
}
