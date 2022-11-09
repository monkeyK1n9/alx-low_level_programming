#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of entries
 * @argv: array of entries
 * Return: Always success 0
 */

int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;

	if (argc < 1)
	{
		return (0);
	}

	for (i = 1; i < argc; ++i)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
