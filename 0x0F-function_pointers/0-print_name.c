#include "main.h"
#include <stdio.h>

/**
 * print_name - prints the name of a dog
 * @name: name of the dog to print
 * @f: function that prints the name
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	return f(name);
}
