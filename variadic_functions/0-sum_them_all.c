#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - A function that sums all its parameters.
 * @n: num of parameters
 * @...:other parameters
 * Return: all of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	double sum = 0;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		 sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
