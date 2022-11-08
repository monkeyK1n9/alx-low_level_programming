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
	int i, j, k, l;

	k = 0;
	l = 0;

	while (argv[k++])
		++l;

	if (l < 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);

	printf("%d\n", i * j);

	return (0);
}
