#include "main.h"

/**
 * print_alphabet_x10 - print x10 lowercase alphabet
 */

void print_alphabet_x10(void)
{
int count = 0;

	char lowercase;

	while (count++ < 10)
	{
	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		_putchar(lowercase);
	_putchar('\n');
	}
}
