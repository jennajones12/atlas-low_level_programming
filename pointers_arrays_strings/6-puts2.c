#include "main.h"
/**
 * puts2 - print every other character starting with first, new line
 * @str: inputs string
 */
void puts2(char *str)
{
    int i = 0;
    while (str[i] != '\0') 
    {
        putchar(str[i]);
        i += 2;
    }
    putchar('\n');
}
