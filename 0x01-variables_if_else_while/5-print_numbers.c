#include <stdio.h>

/**
 * main - Entry point
 *
 * prints numbers from 0 to 9
 *
 * Return: Always 0
 */

int main(void)
{
	int number;

	for (number = 0; number <= 9; ++number)
		printf("%i", number);
	printf("\n");
	return (0);
}
