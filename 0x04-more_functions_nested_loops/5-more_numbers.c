#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 ten times
 *
 * Return: list of numbers
 */

void more_numbers(void)
{
	char i, j;

	i = 0;
	while (i < 10)
	{
		for (j = 0; j <= 14; ++j)
		{
			if (j < 10)
			{
				_putchar(j + '0');
			}
			else
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
		}
		_putchar('\n');
		++i;
	}
}
