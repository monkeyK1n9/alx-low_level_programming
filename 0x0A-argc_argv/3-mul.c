#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of entries
 * @argv: array of entries
 * Return: Always success 0
 */

int main(int argc, char *argv[])
{
	int i, j;

	i = atoi(argv[1]);
	j = atoi(argv[2]);

	printf("%d\n", i * j);

	return (0);
}
