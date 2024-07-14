#include "main.h"
/**
 * _sqrt - helper for _sqrt_recursion
 * @n: input number
 * @x: iterator
 *
 * Return: 1 if @n is prime, 0 otherwise
 */
int _sqrt(int n, int x)
{
	if (x == 1)
	{
		return (1);
	}
	if (n % x == 0)
	{
		return (0);
	}
	return (_sqrt(n, x - 1));
}

/**
 * is_prime_number - checks if number is prime number
 * @n: number to check
 *
 * Return: 1 if @n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
	return (0);
	}
	return (_sqrt(n, n / 2) ? 1 : 0);
}
