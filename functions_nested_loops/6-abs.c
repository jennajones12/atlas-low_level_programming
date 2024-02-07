#include "main.h"
#include <stdio.h>
/*
 * _abs - Computes the absolute value of an integer.
 * @num: The integer to compute the absolute value for.
 *
 * Return: The absolute value of the integer.
 */
int _abs(int num)
{
	if (num < 0)
		return -num;
	else
		return num;
}
