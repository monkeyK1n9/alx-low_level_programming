#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - prints anything as argument
 * @format: list of types of arguments passed
 * @...: other arguments
 */

void print_all(const char * const format, ...)
{
	int j, k;
	va_list args;
	char *string;
	char *formatString;
	char *tmp;
	char c;

	va_start(args, format);
	k = 0;
	while (format[k] != '\0')
	{
		k++;
	}

	j = 0;
	formatString = '\0';
	tmp = '\0';
	string = '\0';
	while (format[j] != '\0')
	{
		c = format[j];
		if (c == 'c' || c == 'i' || c == 'f' || c == 's')
		{
			tmp = strncat('%', format[j]);
		}

		if (j != k)
		{
			tmp = strncat(tmp, ' ');
		}
		formatString = strncat(formatString, tmp);
	}
	formatString = strncat(formatString, '\n');

	vsprintf(string, formatString, args);
	va_end(args);
	printf("%s\n", string);
}
