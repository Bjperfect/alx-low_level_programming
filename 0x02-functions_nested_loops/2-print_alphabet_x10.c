#include "main.h"

/**
 * print_alphabet_x10 - print x10 lowercase alphabet
 */

void print_alphabet_x10(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase < '10'; lowercase++)
		_putchar(lowercase);
	_putchar('\n');
}
