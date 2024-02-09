#include "main.h"
/**
 * _sqrt_recursion - calculates natural sq root of a num
 * @n: num to find sq root of
 *
 * Return: natural square root of n or -1 if n doesnt have natural sq root
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n ==1)
{
	return (n);
}
int start = 1, end = n / 2, result = -1;

while (start <= end)
{
	int mid = start + (end - start) / 2;

	if (mid * mid == n)
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
