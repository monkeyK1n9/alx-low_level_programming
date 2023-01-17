#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of entries
 * Return: 0 if success, exit with 98 if
 * number of arguments is wrong, exit whti 99
 * if the operator is wrong, exit with 100 if
 * second integer is 0 in division or modulus
 */

int main(int argc, char *argv[])
{
	int number1, number2;
	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	number1 = atoi(argv[1]);
	number2 = atoi(argv[3]);

	s = argv[2];
	if (get_op_func(s) == NULL || s[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*s == "/" || *s == "%") && number2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(s)(number1, number2));
	return (0);
}
