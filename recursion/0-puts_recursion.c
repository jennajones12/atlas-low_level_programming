#include "main.h"
/* _puts_recursion - a function that prints a string followed by a \n to the stndrd out
 *@s: pointer to null-terminated sring to be printed
 *return:none
 */

void _puts_recursion(char *s)
{
	if (*s)
{
	putchar(*s);

	_puts_recursion(s + 1);
}
else
{
	putchar('\n');
}
}
