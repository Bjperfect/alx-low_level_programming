#include "main.h"
/**
 * _islower - check for lowercase alphabet
 * @c: is the char to be checked
 * Return: 1 if the function is lowercase otherwise 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

