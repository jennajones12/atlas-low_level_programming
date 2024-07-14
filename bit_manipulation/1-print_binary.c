#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * _exit - Exits the program
 * @status: Exit status
 * Return: none
 */

void _exit(int status)
{
	exit(status);
}

/**
 * print_binary_rec - Recursively prints the binary representation of a number
 * @n: The number to be converted to binary
 */

void print_binary_rec(unsigned long int n)
{
	if (n > 1)
		print_binary_rec(n >> 1);
	_putchar((n & 1) + '0');
}

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be converted to binary
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		print_binary_rec(n);
	_putchar('\n');
}
