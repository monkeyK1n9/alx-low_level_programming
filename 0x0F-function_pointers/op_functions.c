#include "calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of integers
 */

int op_add(int a, int b)
{
	if (a != NULL || b != NULL)
		return (a + b);

}

/**
 * op_sub - substract tow integers
 * @a: first integer
 * @b: second integer
 * Return: result of substraction
 */

int op_sub(int a, int b)
{
	if (a != NULL || b != NULL)
		return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: result of multiplicatoin
 */

int op_mul(int a, int b)
{
	if (a != NULL || b != NULL)
		return (a * b);
}

/**
 * op_div - divide two numbers
 * @a: first integer
 * @b: second integer
 * Return: result of division
 */

int op_div(int a, int b)
{
	if (a != NULL || b != NULL || b != 0)
		return (a / b);
}

/**
 * op_mod - computes the remainder
 * @a: first integer
 * @b: second integer
 * Return: remainder of operations
 */

int op_mod(int a, int b)
{
	if (a != NULL || b != NULL || b != 0)
		return (a % b);
}
