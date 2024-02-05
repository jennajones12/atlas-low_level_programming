#include "main.h"
/**
 * _strncat - does not need to be null if >= n
 * @dest: first string
 * @src: second string
 * @n: cat second string
 * Return: cat string
 */
char *_strncat(char *dest, char *src, int n)
{
	char result = dest;

	 while (*dest != '\0')
	 {
		 dest++;
	 }
	 
	 while (*src != '\0' && n > 0)
	 {
		 *dest = *src;
		 dest++;
		 src++;
		 n--;
	 }

	 *dest = '\0';

	 return result;

}
