#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 * Return: nothing
 */

void rev_string(char *s)
{
	int i, j;
	char tmp = s;

	i = 0;
	while (!(*(s + i) == 0))
	{
		++i;
	}

	for (j = i; j >= 0; --j)
	{
		*(s + (i - j)) = *(tmp + j);
	}
}
