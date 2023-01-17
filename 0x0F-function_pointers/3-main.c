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
	int (*operation)(int, int);
	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	s = argv[2];
	if (*s != "+" || *s != "-" || *s != "*" || *s != "/" || *s != "%")
	{
		printf("Error\n");
		exit(99);
	}
	if ((*s == "/" || *s == "%") && argv[3] == "0")
	{
		printf("Error\n");
		exit(100);
	}

	operation = get_op_func(argv[2]);

	printf("%s\n", operation(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
