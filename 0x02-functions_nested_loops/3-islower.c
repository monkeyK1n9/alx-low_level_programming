#include "main.h"

/**
 * _islower - is a function that check lowercase characters
 *
 * @c: letter to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	char j;
	int k;

	for (j = 'a'; j <= 'z'; ++j)
	{
		if (j == c)
			k = 1;
		else
			k = 0;
	}
	return (k);
}
