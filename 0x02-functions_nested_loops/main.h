#include <stdio.h>

int printWord(char* word)
{
	printf("%s", word);
	return (0);
}

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; ++i)
		printf("%c", i);
	printf("\n");
	return;
}
