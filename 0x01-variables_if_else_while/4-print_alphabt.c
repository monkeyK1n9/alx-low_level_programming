#include <stdio.h>

/**
 * main - Entry point
 *
 * prints the letters of the alphabet except q and e
 *
 * Return: Always 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; ++letter)
	{
		if (letter != 'q' || letter != 'e')
			putchar(letter);
	}
	putchar('\n');
	return (0);
}
