#include "main.h"

/**
 * is_prime_number - checks if number is prime number
 * @n: number to check
 *
 * Return: 1 if @n is prime, 0 otherwise
 */
int is_prime_number int(int n, int divisor)
{
	if (n <= 1)
		return (0);

	if (divisor * divisor > n)
		return (1);
	
	if (n % divisor == 0)
		return (0);
		
	return (is_prime_number(n, divisor + 1));
}
