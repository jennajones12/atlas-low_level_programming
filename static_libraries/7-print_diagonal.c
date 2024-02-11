#include "main.h"
/**
 * print_diagonal - draw a diagonal line
 * @n: is diagonal length
 * Return: 0
 */
void print_diagonal(int n)
{
	int x = 0, z;

	if (n > 0)
	{
		while (x < n)
		{
			z = 0;
			while (z < x)
			{
				_putchar(' ');
				z++;
			}
			_putchar('\\');
			_putchar('\n');
			x++;
		}
	}
	else
		_putchar('\n');
}
