#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers from an n number to 98
 *
 * @n: number to start printing from
 *
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	if (n >= 0)
	{
		if (n <= 98)
		{
			for (i = n; i <= 98; ++i)
			{
				if (i < 98)
					printf("%i, ", i);
				else
					printf("%i", i);
			}
			printf("\n");
		}
		else
		{
			for (i = n; i >= 98; --i)
			{
				if (i < 98)
					printf("%i, ", i);
				else
					printf("%i", i);
			}
			printf("\n");
		}
	}
	else
	{
		for (i = n; i <= 98; ++i)
		{
			if (i < 98)
				printf("%i, ", i);
			else
				printf("%i", i);
		}
		printf("\n");
	}
}
