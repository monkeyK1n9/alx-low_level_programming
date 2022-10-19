#include "main.h"

/**
 * main - Entry point
 *
 * fuction to print word
 *
 * Return: Always 0
 */

int main(void)
{
	char i[8] = "_putchar";
	int j;

	for (j = 0; j <= 7; ++j)
		printChar(i[j]);

	printChar('\n');
	return (0);
}
