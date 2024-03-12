#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - A function that gets number of bits needed to flip
 * @n: How many bit flips are needed to equal m for n
 * @m: The number to set other equal
 * Return: The number of fliped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m);

unsigned int countSetBits(unsigned long int n);

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;

	return (countSetBits(xor_result));
}

unsigned int countSetBits(unsigned long int n)
{
unsigned int count = 0;

while (n)
{
	count += n & 1;
	n >>= 1;
}
return (count);
}
