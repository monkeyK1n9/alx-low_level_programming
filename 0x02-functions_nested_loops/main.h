#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include "1-alphabet.h"

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet(void);

#endif
