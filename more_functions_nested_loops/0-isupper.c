#include "main.h"
#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c: input value
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
