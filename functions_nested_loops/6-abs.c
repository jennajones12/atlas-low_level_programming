#include "main.h"
#include <stdio.h>
/*
 * _abs - Computes the absolute value of an integer.
 * @num: The integer to compute the absolute value for.
 *
 * Return: The absolute value of the integer.
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
