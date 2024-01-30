#include <stdio.h>

void print_triangle(int size) {
    if (size <= 0) {
        _putchar('\n');
    } else {
        for (int i = 1; i <= size; i++) {
            for (int j = 0; j < i; j++) {
                _putchar('#');
            }
            _putchar('\n');
        }
    }
}
