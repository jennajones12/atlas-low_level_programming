#include "main.h"

/**
 * _sqrt_recursion - computes natural square root of a number.
 * @n: number to find the square root of.
 *
 * Return: natural square root of @n or -1 if n doesnt exist.
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if ( n == 0 || n == 1)
		return (n);

	return (helper_sqrt(n, 1));
}

/**
 * help`:er_sqrt - Finds the square root of a number recursively.
 * @n: The number to find the square root of.
 * @i: The current candidate for the square root.
 *
 * Return: The natural square root of @n if it exists, otherwise -1.
 */
int helper_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1);

	return (helper_sqrt(n, i + 1));
}

