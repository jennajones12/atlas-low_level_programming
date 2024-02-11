#include "main.h"
#include <ctype.h>

/**
 * _islower - returns 1 for c is lowercase check
 * @c: character for checking
 * Return: return 1 if c is lowercase; otherwise return 0
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
