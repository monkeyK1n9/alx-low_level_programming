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
	char number;

	for (number = 0; number <= 9; ++number)
		putchar(number);
	putchar('\n');
	return (0);
}
