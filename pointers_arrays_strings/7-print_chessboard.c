#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: 2D array representing the chessboard
 * 'a' represents the black squares and ' ' represents the white squares.
 *
 */
void print_chessboard(char (*a)[8])
{
    int i = 0, j = 0;

    FILE *stream = stdout;

    while (i < 8)
    {
        j = 0;
        while (j < 8)
        {
            fputc(a[i][j], stream);
            fputc(' ', stream);
            j++;
        }
        fputc('\n', stream);
        i++;
    }
}
