#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns pointer of space which contains
 * a copy of the string
 * @str: string to copy in allocated space
 * Return: pointer to allocated space
 */

char *_strdup(char *str)
{
	char *arr;
	int i;

	i = 0;
	if (str == NULL)
		return (NULL);

	while (str[i])
		++i;

	arr = malloc(sizeof(char) * i);

	if (arr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		arr[i] = str[i];

	return (arr);
}
