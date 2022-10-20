#include "main.h"

/**
 * _abs - function to produce a number's absolute value
 *
 * @n: integer to check
 *
 * Return: returns the abs value
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n *= -1);
}
