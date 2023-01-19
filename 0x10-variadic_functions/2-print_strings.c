#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - prints the strings given as arguments
 * @separator: the separator between strings
 * @n: number of strings to print
 * @...: the other arguments
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *string;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char *);

		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}


	va_end(args);
	printf("\n");
}
