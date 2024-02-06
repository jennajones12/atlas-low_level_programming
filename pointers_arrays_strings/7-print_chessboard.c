#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_row - prints a row of the chessboard
 * @row: pointer to the row of the chessboard
 *
 * Description: Recursively prints a row of the chessboard.
 */
void print_row(char *row) {
    if (*row == '\0') {
        putchar('\n');
        return;
    }
    putchar(*row);
    putchar(' ');
    print_row(row + 1);
}

/**
 * print_chessboard - prints the chessboard
 * @a: 2D array representing the chessboard
 *
 * Description: Recursively prints the entire chessboard.
 */
void print_chessboard(char (*a)[8]) {
    if (*a == NULL)
        return;
    print_row(*a);
    print_chessboard(a + 1);
}
