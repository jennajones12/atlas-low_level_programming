#include "main.h"
/**
 * print_line - draw straight line in terminal
 * @n: length of line
 * Return: zero
 */

void print_line(int n)
{
	int i

    	if (n > 0)
       		 for (int i = 0; i < n; i++)
        		 _putchar('_');
        _putchar('\n');
}
