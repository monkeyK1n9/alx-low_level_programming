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
	int k;

	if (c >= 'a' && c <= 'z')
		k = 1;
	else
		k = 0;

	return (k);
}
