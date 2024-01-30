#include "main.h"
/**
 * _atoi - function that converts string to integer
 * @s: input string
 * Return: an integer
 */
int custom_atoi(char *s)
{
    int result = 0;
    int i = 0;
    int sign = 1;

    while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13)) 
    {
        i++;
    }

    if (s[i] == '-' || s[i] == '+') 
    {
        sign = (s[i++] == '-') ? -1 : 1;
    }

    while (s[i] >= '0' && s[i] <= '9') 
    {
        result = result * 10 + (s[i++] - '0');
    }

    return sign * result;
}
