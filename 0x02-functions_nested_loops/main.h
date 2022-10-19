#include <stdio.h>

int printChar(char c)
{
	putchar(c);
	return (0);
}

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; ++i)
 		printChar(i);
 	printChar('\n');
 	return;
}
