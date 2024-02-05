#include "main.h"
/**
 * leet - Encodes a string into 1337
 * @str: input string
 * Return: String that is encoded
 */
char *leet(char *str) 
{

    for (int i = 0; str[i] != '\0'; i++) 
    {

        if (str[i] == 'a') str[i] = '4';
        else if (str[i] == 'e') str[i] = '3';
        else if (str[i] == 'o') str[i] = '0';
        else if (str[i] == 't') str[i] = '7';
        else if (str[i] == 'l') str[i] = '1';

        else if (str[i] == 'A') str[i] = '4';
        else if (str[i] == 'E') str[i] = '3';
        else if (str[i] == 'O') str[i] = '0';
        else if (str[i] == 'T') str[i] = '7';
        else if (str[i] == 'L') str[i] = '1';
    }
    
    return str;
}
