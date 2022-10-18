#include <stdio.h>

/**
 * main - Entry point
 *
 * prints the letters of the alphabet small and capital
 *
 * Return: Always 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; ++letter)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; ++letter)
		putchar(letter);
	putchar('\n');
	return (0);
}
