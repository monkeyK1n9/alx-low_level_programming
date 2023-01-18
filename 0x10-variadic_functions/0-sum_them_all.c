#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - returns sum of all its parameters
 * @n: first parameter
 * Return: always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	unsigned int sum = 0;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = n; i >= 0; i = va_arg(args, int))
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
