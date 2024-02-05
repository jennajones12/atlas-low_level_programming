#include "main.h"
/**
 * leet - Encodes a string into 1337
 * @str: input string
 * Return: String that is encoded
 */
char *leet(char *str)
{
char *result = str;
	
if (str == NULL)
{
return NULL;
}

while (*str)
{
switch (*str)
{
    case 'a':
    case 'A':
        *str = '4';
         break;
    case 'e':
    case 'E':
         *str = '3';
         break;
    case 'o':
    case 'O':
         *str = '0';
         break;
    case 't':
    case 'T':
         *str = '7';
         break;
    case 'l':
    case 'L':
         *str = '1';
         break;
       }
        str++;
    }

    return (result);
}
