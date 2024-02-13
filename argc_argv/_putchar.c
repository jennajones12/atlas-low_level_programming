#include <unistd.h>
/**
 * _putchar - writes character c to stdoutput
 * @c: character to print
 * Return: 1 if successful
 * Error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
