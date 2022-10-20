#include "main.h"

/**
 * add - adds two given integers
 *
 * @n: first integer
 * @m: second integer
 *
 * Return: returns number added
 */

int add(int n, int m)
{
	int s;

	s = n + m;

	do
	{
		_putchar((s / 10) + '0');
		_putchar((s % 10) + '0');
		s /= 10;
	} while ((s / 10) > 0)

	return (0);
}
