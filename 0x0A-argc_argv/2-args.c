#include <stdio.h>

/**
 * main - Entry point
 * @argc: number of entries
 * @argv: array of entries
 * Return: Always success 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", args[i]);
	}
	return (0);
}
