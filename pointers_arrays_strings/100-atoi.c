#include "main.h"
/**
 * _atoi - function that converts string to integer
 * @s: input string
 * Return: an integer
 */
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

while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
{
	i++;
}

if (s[i] == '-' || s[i] == '+')
{
	if (s[i] == '-')
	{
		sign = -1;
	}
	i++;
}

while (s[i] >= '0' && s[i] <= '9')
{
	result = result * 10 + (s[i] - '0');
	i++;
}

return sign * result;
}
