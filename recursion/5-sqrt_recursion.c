#include "main.h"
/**
 * _sqrt_recursion - calculates natural sq root of a num
 * @n: num to find sq root of
 *
 * Return: natural square root of n or -1 if n doesnt have natural sq root
 */
int _sqrt_recursion(int n)
{
	if (n < 0 || (n != 0 && n < 2))
{
	return (-1);
}
	else if (n == 0)
{
	return (0);
}
else
{
int start = 1;
int end = n;
int result = -1
while (start <= end)
{
	int mid = (start + end) / 2;
	iif (mid * mid == n)
{
	return (mid);
}
else if (mid * mid < n)
{
	start = mid + 1;
	result = mid;
}
else
{
	end = mid -1;
}
}
return (result);
}
}
