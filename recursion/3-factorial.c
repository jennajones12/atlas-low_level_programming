#include "main.h"

/**
 * factorial - calculates factorial of given num
 * @n: number to calculate factorial of
 *
 * Return: factorial of n or -1 if n is neg
 */
int factorial(int n)
{
	if (n < 0)
{
	return (-1);
}
else if ( n == 0)
{
	return (1);
}
else
{
	return (n * factorial(n - 1));
}
}
