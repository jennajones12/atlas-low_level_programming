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

int divisor =2;

while (divisor * divisor <= n)
{
	if (n % divisior == 0)
		return (0);
	divisor++;
}

return (1);
}
