#include "main.h"
/**
 * _isalpha - check for lowercase and uppercase alphabet
 * @c: is the char to be checked
 * Return: 1 if the function is lowercase or uppercase otherwise return 0.
 */

int _isalpha(int c)

{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
