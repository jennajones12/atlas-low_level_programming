#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14, a new line
 *
 * Return: null
 */

void more_numbers(void)
{
	int x;
	int z;

	for (x = 0; x < 10; x++)
	{
	for (z = 0; z <= 14; z++)
	{
		if (z > 9)
			_putchar((z / 10) + '0');
		_putchar((z % 10) + '0');
	}
	_putchar('\n');
	}
}
