#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: list of numbers with fizz buzz words
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; ++i)
	{
		if (i < 100)
		{
			if (i % 3 == 0 && i % 5 == 0)
			{
				printf("FizzBuzz ");
			}
			else if (i % 3 == 0 && !(i % 5 == 0))
			{
				printf("Fizz ");
			}
			else if (!(i % 3 == 0) && i % 5 == 0)
			{
				printf("Buzz ");
			}
			else
			{
				printf("%i ", i);
			}
		}
		else
		{
			printf("Buzz");
		}
	}
	return (0);
}
