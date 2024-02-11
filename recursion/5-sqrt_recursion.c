#include "main.h"

/**
 * _sqrt_recursion - calculates natural sq root of a num
 * @n: num to find sq root of
*
* Return: natural square root of n or -1 if n doesnt have natural sq root
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	return (_sqrt_helper(n, 1, n));
}

int _sqrt_helper(int n, int low, int high)
{
	int mid = (low + high) / 2;
	int square = mid * mid;

	if (square == n)
		return (mid);

	else if (square < n)
		return (_sqrt_helper(n, low, mid, -1));
}
