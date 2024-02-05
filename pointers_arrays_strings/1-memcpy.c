#include "main.h"
/**
 * _memcpy - copies n bytes from one area to another
 * @dest: end point
 * @src: start point
 * @n: copy length
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return memcpy (dest, src, n);
}
