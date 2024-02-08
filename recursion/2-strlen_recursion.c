#include "main.h"

/**
 *  _strlen_recursion - function that returns the length of a string.
 * @s: An input string to printing
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	int length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
