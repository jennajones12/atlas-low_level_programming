#include "search_algos.h"

int binary_find(int *array, size_t size, int value)
{
    return (binary_find_recursive(array, 0, size - 1, value));
}

int binary_find_recursive(int *array, size_t left, size_t right, int value)
{
    size_t mid;

    if (!array)
        return (-1);

    display_array(array, left, right);
    mid = left + (right - left) / 2;

    if (array[mid] == value)
        return ((int)mid);

    if (left < right)
    {
        if (array[mid] < value)
            return (binary_find_recursive(array, mid + 1, right, value));
        else
            return (binary_find_recursive(array, left, mid - 1, value));
    }

    return (-1);
}

void display_array(int *array, size_t left, size_t right)
{
    size_t idx;

    printf("Searching in array: ");
    for (idx = left; idx <= right; idx++)
    {
        printf("%d", array[idx]);
        if (idx < right)
            printf(", ");
    }
    printf("\n");
}
