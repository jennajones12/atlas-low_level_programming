#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - A function that print numbers followed by a new line.
 * @separator: An input string to be printed between numbers.
 * @n: number of parameters
 * @...: Other parameters
 * Return: The of all parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	 va_start(args, n);

	  for (i = 0; i < n; i++)
	  {
		  printf("%d", va_arg(args, int));
		  if (i < n - 1 && separator != NULL)
		  {
			   printf("%s", separator);
		  }
	  }
	  printf("\n");
	  va_end(args);
}
