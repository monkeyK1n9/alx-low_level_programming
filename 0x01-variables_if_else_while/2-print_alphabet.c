#include <stdio.h>

/**
 * main - Entry point
 *
 * prints the letters of the alphabet
 *
 * Return: Always 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; ++letter)
		putchar(letter);
	putchar('\n');
	return (0);
}
