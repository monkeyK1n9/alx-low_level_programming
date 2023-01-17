#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - gets the operation to calculation
 * @s: operator
 * Return: pointer to the operator or NULL if none
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i][0] != NULL)
	{
		if (s == ops[i][0])
			return (ops[i][1]);
		i++;
	}
	return (NULL);
}
