#include "search_algos.h"

/**
 * binary_search - Performs binary search on a sorted array of integers.
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */
int binary_search(int *array, size_t size, int value)
{
    return (binary_search_recursive(array, 0, size - 1, value));
}

/**
 * binary_search_recursive - Recursively searches for a value in an array.
 * @array: Pointer to the first element of the array.
 * @low: The starting index of the current search range.
 * @high: The ending index of the current search range.
 * @value: The value to search for.
 *
 * Return: The index where the value is found, or -1 if not found.
 */
int binary_search_recursive(int *array, size_t low, size_t high, int value)
{
    size_t mid;

    if (!array)
        return (-1);

    display_array(array, low, high);
    mid = low + (high - low) / 2;

    if (array[mid] == value)
        return ((int)mid);

    if (low < high)
    {
        if (array[mid] < value)
            return (binary_search_recursive(array, mid + 1, high, value));
        else
            return (binary_search_recursive(array, low, mid - 1, value));
    }

    return (-1);
}

/**
 * display_array - Prints the current portion of the array being searched.
 * @array: Pointer to the first element of the array.
 * @low: The starting index of the range to print.
 * @high: The ending index of the range to print.
 *
 * Return: void
 */
void display_array(int *array, size_t low, size_t high)
{
    size_t idx;

    printf("Searching in array: ");
    for (idx = low; idx <= high; idx++)
    {
        printf("%d", array[idx]);
        if (idx < high)
            printf(", ");
    }
    printf("\n");
}
