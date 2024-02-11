#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - calculates and  prints primary, secondary sums
 * of a square matrix of integers
 * @a: points to first element of matrix
 * Return: none
 */

void print_diagsums(int *a, int size)
{
int primary_sum = 0;
int secondary_sum = 0;

int i = 0;
while (i < size)
{
	primary_sum += a[i * size + i];
	secondary_sum += a[i * size + (size - 1 - i)];
	i++;
}

printf("Sum of primary diagonal: %d\n", primary_sum);
printf("Sum of secondary diagonal: %d\n", secondary_sum);
}

