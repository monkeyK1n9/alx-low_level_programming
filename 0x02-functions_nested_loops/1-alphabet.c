#include "main.h"

/**
 * main - Entry point
 *
 * prints letters of the alphabet
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; ++i)
		printChar(i);
	
	printChar('\n');
 	return;   
}

int main(void)
{
 	print_alphabet();
 	return (0);
}
