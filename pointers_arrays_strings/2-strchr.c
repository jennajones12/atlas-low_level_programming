#include "main.h"
/**
 * _strchr - locate char in string
 * @s: input string
 * @c: character to find!
 * Return: pointer upon first occurance
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
{
	if (*s == c)
{
	return s;
}
s++;
}
return NULL;
}
