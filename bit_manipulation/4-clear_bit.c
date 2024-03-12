#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - Clear a bit at a given index
 * @n: Pointer to the unsigned long int to modify
 * @index: Index of the bit to clear
 * Return: 1 if successful, -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	 mask = ~(1UL << index);
	 *n = *n & mask;
	 
	return (1);
}
