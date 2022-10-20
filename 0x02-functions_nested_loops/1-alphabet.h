#include <unistd.h>

int printchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; ++i)
 		printchar(i);
 	printchar('\n');
 	return;
}
