#include "main.h"
#include <string.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search
 * @accept: characters to search for
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
		while (*s != '\0' &&

strchr(accept, *s) != NULL) {
count++;
s++;
}
return (count);
}
