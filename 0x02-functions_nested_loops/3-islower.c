#include "main.h"

/**
 * _islower - is a function that check lowercase characters
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	char j;

	for (j = 'a'; j <= 'z'; ++j)
	{
		if ( j == c)
			return (1);
		else
			return (0);
	}
}
