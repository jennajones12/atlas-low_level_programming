#include "main.h"
/**
 * _sqrt - helper for _sqrt_recursion
 * @n: input number
 * @x: iterator
 * Return: square root of number.
 */

int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}

/**
 * _sqrt_recursion - computes natural square root of a number.
 * @n: number to find the square root of.
 *
 * Return: natural square root of @n or -1 if @n doesnt exist.
*/

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt(0, n));
}
