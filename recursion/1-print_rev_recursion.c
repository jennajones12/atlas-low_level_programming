#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse, followed by new line
 * @s: an input string to printing
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);

		putchar(*s);

	}
}
