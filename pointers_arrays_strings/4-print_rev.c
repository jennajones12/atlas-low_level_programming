#include "main.h"
/**
 * print_rev - prints string in rev
 * @s: string input
 */
void print_rev(char *s)
{
	int i = 0;
	while (s[i] != '\0') {
		i++;
	}
	i--;
	while (i >= 0) {
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}
