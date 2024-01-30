#include "main.h"

/**
 * _strlen - returns length of string
 * @s: string length parameter
 * Return: string length value
 *
 */
int_strlen(char *s)
{
	int length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return length;
}
