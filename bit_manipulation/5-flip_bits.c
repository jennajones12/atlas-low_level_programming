#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - A function that gets number of bits needed to flip
 * @n: How many bit flips are needed to equal m for n
 * @m: The number to set other equal
 * Return: The number of fliped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m);

/**
 * countSetBits - Count the number of set bits in a number
 * @n: The number to count set bits in
 *
 * Return: Number of set bits
 */

unsigned int countSetBits(unsigned long int n);

/**
 * flip_bits - Counts number of bits to flip from one number to another
 * @n: First number
 * @m: Second number
 *
 * Return: Number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;

	return (countSetBits(xor_result));
}

/**
 * countSetBits - Count the number of set bits in a number
 * @n: The number to count set bits in
 *
 * Return: Number of set bits
 */

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
