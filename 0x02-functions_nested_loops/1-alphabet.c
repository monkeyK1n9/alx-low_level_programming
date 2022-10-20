#include "main.h"
#include <unistd.h>
/**
 * main - Entry point
 *
 * prints letters of the alphabet
 *
 * Return: Always 0
 */
int main(void)
{
	print_alphabet();

	return (0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; ++i)
		_putchar(i);
	_putchar('\n');
	return;
}
