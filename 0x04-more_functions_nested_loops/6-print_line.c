#include "main.h"

/**
 * print_line - function that print a line
 *@n: line
 * Return: line
 */

void print_line(int n)
{
int co;

if (n <= 0)
{
_putchar('\n');
}

else
{
for (co = 1; co <= n; co++)
{
_putchar('_');
}
_putchar('\n');
}
}
