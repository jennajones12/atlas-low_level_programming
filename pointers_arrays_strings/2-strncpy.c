#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: string to be replaced
 * @src: string that will be copied
 * @n: bytes to be used
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
    char *result = dest;

    if (dest == NULL)
{
        return NULL;
    }

    while (*src && n--)
{
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';

    return (result);
}
