#include "main.h"

int find_sqrt(int num, int root);

/**
 * find_sqrt - finds the perfect square from initial inputs
 * in the _sqrt_recursion function
 * @num: the number to calculate square root
 * @root: the root of num
 * Return: the root
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - gives the natural sqrt of a number
 * @n: number to give the sqrt
 * Return: if natural sqrt exist, return it,else -1
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
