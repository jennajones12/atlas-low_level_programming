#include "main.h"
/**
 * _pow_recursion - calculates value of x raised to the power of y
 * @x: base
 * @y: exponent
 *
 * Return: x raised to the power of y or -1 if y is neg
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
{
	return (-1);
}
else if (y == 0)
{
	return (1);
}
else
{
	return (x * _pow_recursion(x, y - 1));
}
}
