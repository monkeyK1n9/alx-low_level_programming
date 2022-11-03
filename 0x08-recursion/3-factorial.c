#include "main.h"

/**
 * factorial - prints the factorial of a number
 * @n: number to compute factorial
 * Return: factorial if n is positive or -1 if n is negative
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
