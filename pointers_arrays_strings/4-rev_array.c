#include "main.h"
/**
 * reverse_array - reverse an integer array
 * @a: array of ints
 * @n: elements in array to be swapped
 * Return: 0
 */
void reverse_array(int *a, int n)
{
int start = 0;
int end = n - 1;
int temp;

while (start < end)
{

temp = a[start];
a[start] = a[end];
a[end] = temp;

start++;
end--;
}
}
