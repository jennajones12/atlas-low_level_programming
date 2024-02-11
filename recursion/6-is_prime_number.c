#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - checks if number is prime number
 * @n: number to check
 *
 * Return: 1 if @n is prime, 0 otherwise
 */

/**
 * is_prime_helper - Recursive helper function to check primality.
 * @n: The input integer to check.
 * @divisor: The current divisor to test.
 *
 * Return: 1 if prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

int is_prime_helper(int n, int divisor)
{
	if (divisor * divisor > n)
		return (1);
	
	if (n % divisor == 0)
		return (0);

	return (is_prime_helper(n, divisor + 1));
}
}
