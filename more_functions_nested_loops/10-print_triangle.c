#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: triangle size
 * Return: none
 */
void print_triangle(int size) 
{
    if (size <= 0) {
        putchar('\n');
    } else {
        for (int i = 1; i <= size; i++) {
            for (int j = 0; j < i; j++) {
                putchar('#');
            }
            putchar('\n');
        }
    }
}
