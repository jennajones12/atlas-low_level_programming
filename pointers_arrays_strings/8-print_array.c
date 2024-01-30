#include "main.h"
/**
 * print_array - prints elements of an array
 * @a: interger for array
 * @n: elements in the array
 */
void print_array(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        if (i < n - 1) 
	{
            printf(", ");
        }
    }
    printf("\n");
}
