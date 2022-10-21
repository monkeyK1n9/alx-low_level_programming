#include "main.h"

/**
 * main - Entry point
 *
 * checks if 0 verifys with positive_or_negative function
 *
 * Return: return 1 or 0 depending on result
 */

int main(void)
{
	int i;
	char t;

	i = 0;
	t = positive_or_negative(i);

	if (t == "0 is zero")
		return (0);
	else
		return (1);
}
