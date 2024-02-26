#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function to print a name
 * @f: function to print name
 * @name: pointer
 * Return: none
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
	return;
f(name);
}
