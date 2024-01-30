#include "main.h"
/**
 * _atoi - function that converts string to integer
 * @s: input string
 * Return: an integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	if (s[i] == '-')
	{
		sign = -1;
		i++;
}

	if (s[i] == '+')
	{
		i++;
	}

	while (s[i] != '\0')
	{

		if (s[i] >= '0' && s[i] <= '9')
		{

			result = result * 10 + (s[i] - '0');
		}
		else
		{

		}
		i++;
	}

	result = result * sign;

	return result;
}
