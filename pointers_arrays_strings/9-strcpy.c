#include "main.h"
/**
 * _strcpy - cp pointed string, inc \0, to buffer dest
 * @dest: pointed to string
 * @src: given string
 * Return: pointer destination
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '/0';
	return dest;
}
