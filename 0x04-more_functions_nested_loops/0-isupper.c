#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 *
 * @c: entery character
 *
 * Return: returns 1 or 0 (true or false)
 */

int _isupper(int c)
{
	int d;
	int result;

	for (d = 'A'; d <= 'Z'; ++d)
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
