#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - checks if number is prime number
 * @n: number to check
 *
 * Return: 1 if @n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	if (n == 2)
		return (1);

	if (n % 2 == 0)
		return (0);

	int i = 3;
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i+= 2;
	}
	
	return (1);
}
