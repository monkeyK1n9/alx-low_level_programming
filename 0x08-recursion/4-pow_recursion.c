#include "main.h"

/**
 * _pow_recursion - gives the power of a number x raised
 * to the number y
 * @x: number to raise power to
 * @y: power of x
 * Return: integer of power of x of y or -1 if y is negative
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
