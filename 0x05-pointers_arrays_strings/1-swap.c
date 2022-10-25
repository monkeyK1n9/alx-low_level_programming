#include "main.h"

/**
 * swap_int - swaps integer values of two numbers
 * @a: first number
 * @b: second number
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
