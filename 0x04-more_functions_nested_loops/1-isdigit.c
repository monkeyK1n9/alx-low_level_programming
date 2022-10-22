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
	int d;
	int result;

	for (d = 0; d <= 9; ++d)
	{
		if (c == d)
		{
			result = 1;
			break;
		}
		else
		{
			result = 0;
			continue;
		}
	}
	return (result);
}
