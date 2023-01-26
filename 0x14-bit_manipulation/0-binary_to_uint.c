#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a char of string either 0 or 1
 * Return: the converted number, or 0 if
 * there isone or more chars in the string b that is not 0 or 1
 * returns 0 if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0, multiple = 1;
	int i;

	if (b == '\0')
		return (0);

	for (len = 0; b[i];)
		i++;

	for (i -= 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		number += (b[i] - '0') * multiple;
		multiple *= 2;
	}

	return (number);
}
