#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * print_diagsums - calculates and  prints primary, secondary sums
 * of a square matrix of integers
 * @a: points to first element of matrix
 * Return: none
 */

void print_diagsums(int *a, int size)
{
	int sum_diag1 = a[0] + a[size + 1] + a[size * 2];
	int sum_diag2 = a[size - 1] + a[size + 1] + a[size * 2 - 2];

	printf("Sum of primary diagonal: %d\n", sum_diag1);
	printf("Sum of secondary diagonal: %d\n", sum_diag2);
{
	int matrix[3][3];
}

	srand(time(NULL));
	
	matrix[0][0] = rand() % 100 + 1;
	matrix[0][1] = rand() % 100 + 1;
	matrix[0][2] = rand() % 100 + 1;
	matrix[1][0] = rand() % 100 + 1;
	matrix[1][1] = rand() % 100 + 1;
	matrix[1][2] = rand() % 100 + 1;
	matrix[2][0] = rand() % 100 + 1;
	matrix[2][1] = rand() % 100 + 1;
	matrix[2][2] = rand() % 100 + 1;
{

	printf("Matrix:\n");
	printf("%d\t%d\t%d\n", matrix[0][0], matrix[0][1], matrix[0][2]);
	printf("%d\t%d\t%d\n", matrix[1][0], matrix[1][1], matrix[1][2]);
	printf("%d\t%d\t%d\n", matrix[2][0], matrix[2][1], matrix[2][2]);

	printf("\nDiagonal Sums:\n");
	print_diagsums((int *)matrix, 3);

	return (0);
}
}
