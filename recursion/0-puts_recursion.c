#include "main.h"
/*
 *
 *
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
return;
	}
	putchar(*s);

	_puts_recursion(s + 1);
	
}
