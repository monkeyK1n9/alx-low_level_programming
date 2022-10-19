#include "main.h"

/**
 * main - Entry point
 *
 * prints letters of the alphabet
 *
 * Return: Always 0
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; ++i)
		printChar(i);
	
	printChar('\n');

	return (0);
}
