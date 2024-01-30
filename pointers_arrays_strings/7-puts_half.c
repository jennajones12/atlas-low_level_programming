#include "main.h"
/**
 * puts_half - prints second half of string
 * @str: input string
 */
void puts_half(char *str) {
    int length = 0;
    int i;

    while (str[length] != '\0') {
        length++;
    }

    if (length % 2 == 0) {
        i = length / 2;
    } else {
        i = (length + 1) / 2;
    }

    while (str[i] != '\0') {
        putchar(str[i]);
        i++;
    }
    putchar('\n');
}
