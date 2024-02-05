#include "main.h"
/**
 * leet - Encodes a string into 1337
 * @str: input string
 * Return: String that is encoded
 */
char* leet(char* str) 
{
char *result = str;

if (str == NULL) 
{
return NULL;
}

while (*str) 
{
        if (*str == 'a' || *str == 'A')
{
            *str = '4';
} 
else if (*str == 'e' || *str == 'E') 
{
            *str = '3';
} 
else if (*str == 'o' || *str == 'O') 
{
            *str = '0';
} 
else if (*str == 't' || *str == 'T') 
{
            *str = '7';
} 
else if (*str == 'l' || *str == 'L') 
{
            *str = '1';
}
        str++;
}

    return (result);
}
