#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 *
 * @n: number to access
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	int m;

	m = n % 10;

	if (m < 0)
		m *= -1;
	_putchar(m + '0');

	return (m);
}
