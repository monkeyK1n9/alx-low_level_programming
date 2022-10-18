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
	for (char letter = 'a'; letter <= 'z'; ++letter)
		putchar(letter);
	putchar('\n');
	return (0);
}
