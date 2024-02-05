#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: input string
 * @s2: input string
 * Return: returns ASCII values
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
{
	s1++;
	s2++;
}
return *(unsigned char*)s1 - *
(unsigned char*)s2;
}
