#include <stdlib.h>
#include "main.h"

#define BITS_PER_BYTE 8

/**
 * get_bit - A function that gets a bit at index
 * @n: number to get bit from
 * @index: The index where the bit get at
 * Return: The value of the bit or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max = 0x01;
	max <<= index;
	if ((max & n) == max)
		return (1);
	else if ((max & n) == 0)
		return (0);
	else
		return (-1);
}
