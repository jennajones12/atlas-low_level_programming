#include "main.h"
/**
 * _sqrt_recursion - calculates natural sq root of a num
 * @n: num to find sq root of
 *
 * Return: natural square root of n or -1 if n doesnt have natural sq root
u */
int _start(int)
int _end(int n)
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
int result = -1;
while (start <= end)
{
	int mid = (start + end) / 2;
	if [(mid * mid == n)]
{
	return (mid);
}
if (mid * mid < n)
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
