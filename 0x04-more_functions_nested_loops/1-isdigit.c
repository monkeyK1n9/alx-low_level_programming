#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 *
 * @c: entery character
 *
 * Return: returns 1 or 0 (true or false)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
