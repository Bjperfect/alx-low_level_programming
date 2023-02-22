#include "main.h"
/**
 * print_sign - print all the sign
 * @n: the sign to be checked
 * Return: if n is greater than zero retune 1
 * if equal to zero return 0 if less than zero return -1.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
	return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
