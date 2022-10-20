#include "main.h"

/**
 * print_sign - prints the sign of number
 *
 * @n: test number
 *
 * Return: can return 1,0 or -1 followed by +,0,- respectively
 */

int print_sign(int n)
{
	if (n > 0)
		_putchar("+");
		return (1);
	else if (n < 0)
		_putchar("-");
		return (-1);
	else if (n == 0)
		_putchar("0");
		return (0);
}
